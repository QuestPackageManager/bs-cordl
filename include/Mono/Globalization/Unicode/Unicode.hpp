#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Mono/Globalization/Unicode/CodePointIndexer.hpp"
#include "Mono/Globalization/Unicode/Contraction.hpp"
#include "Mono/Globalization/Unicode/ContractionComparer.hpp"
#include "Mono/Globalization/Unicode/Level2Map.hpp"
#include "Mono/Globalization/Unicode/MSCompatUnicodeTable.hpp"
#include "Mono/Globalization/Unicode/MSCompatUnicodeTableUtil.hpp"
#include "Mono/Globalization/Unicode/NormalizationTableUtil.hpp"
#include "Mono/Globalization/Unicode/SimpleCollator.hpp"
#include "Mono/Globalization/Unicode/SortKeyBuffer.hpp"
#include "Mono/Globalization/Unicode/TailoringInfo.hpp"
#ifdef __cpp_modules
export module Unicode;
#endif
