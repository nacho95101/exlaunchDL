#pragma once

#include <cstdint>
#include <algorithm>
#include <bit>
#include <functional>
#include <ranges>
#include <tuple>
#include "table/lookup_entry.hpp"
#include "table/lookup.hpp"
#include "table/table.hpp"
#include "table/table_set.hpp"

namespace exl::reloc {

    namespace impl {
        
        void Initialize();
        extern Lookup s_CachedLookup;
    }

    [[gnu::const]] 
    inline const Lookup& GetLookupTable() { return impl::s_CachedLookup; }
}
