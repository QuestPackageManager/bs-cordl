#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationContext)
namespace UnityEngine::UIElements {
class IStylePainter;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContext__MeshFlags;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __MeshGenerationContext__MeshFlags;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags);
MARK_REF_PTR_T(::UnityEngine::UIElements::MeshGenerationContext);
// Type: ::MeshFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7337))
// CS Name: ::MeshGenerationContext::MeshFlags
struct CORDL_TYPE __MeshGenerationContext__MeshFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MeshGenerationContext__MeshFlags_Unwrapped
  enum struct ____MeshGenerationContext__MeshFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_UVisDisplacement = static_cast<int32_t>(0x1),
    __E_SkipDynamicAtlas = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MeshGenerationContext__MeshFlags_Unwrapped() const noexcept {
    return static_cast<____MeshGenerationContext__MeshFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MeshGenerationContext__MeshFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshGenerationContext__MeshFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags const None;

  /// @brief Field UVisDisplacement value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags const UVisDisplacement;

  /// @brief Field SkipDynamicAtlas value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags const SkipDynamicAtlas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::MeshGenerationContext
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7338))
// CS Name: ::UnityEngine.UIElements::MeshGenerationContext*
class CORDL_TYPE MeshGenerationContext : public ::System::Object {
public:
  // Declarations
  using MeshFlags = ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags;

  /// @brief Field painter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_painter, put = __cordl_internal_set_painter))::UnityEngine::UIElements::IStylePainter* painter;

  constexpr ::UnityEngine::UIElements::IStylePainter*& __cordl_internal_get_painter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IStylePainter*> const& __cordl_internal_get_painter() const;

  constexpr void __cordl_internal_set_painter(::UnityEngine::UIElements::IStylePainter* value);

  static inline ::UnityEngine::UIElements::MeshGenerationContext* New_ctor(::UnityEngine::UIElements::IStylePainter* painter);

  /// @brief Method .ctor, addr 0x2e7c390, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::IStylePainter* painter);

  // Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshGenerationContext(MeshGenerationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshGenerationContext(MeshGenerationContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationContext();

public:
  /// @brief Field painter, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::IStylePainter* ___painter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshGenerationContext, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationContext, ___painter) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags, "UnityEngine.UIElements", "MeshGenerationContext/MeshFlags");
NEED_NO_BOX(::UnityEngine::UIElements::MeshGenerationContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshGenerationContext*, "UnityEngine.UIElements", "MeshGenerationContext");
