#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicAtlasCustomFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicAtlasCustomFilter)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct DynamicAtlasFilters;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DynamicAtlasCustomFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DynamicAtlasCustomFilter);
// Type: UnityEngine.UIElements::DynamicAtlasCustomFilter
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DynamicAtlasCustomFilter*
class CORDL_TYPE DynamicAtlasCustomFilter : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3509174, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::UnityEngine::Texture2D* texture, ByRef<::UnityEngine::UIElements::DynamicAtlasFilters> filtersToApply);

  static inline ::UnityEngine::UIElements::DynamicAtlasCustomFilter* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x350909c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicAtlasCustomFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasCustomFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicAtlasCustomFilter(DynamicAtlasCustomFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasCustomFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicAtlasCustomFilter(DynamicAtlasCustomFilter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DynamicAtlasCustomFilter, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DynamicAtlasCustomFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DynamicAtlasCustomFilter*, "UnityEngine.UIElements", "DynamicAtlasCustomFilter");
