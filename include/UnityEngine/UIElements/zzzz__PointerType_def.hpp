#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerType)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerType;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerType);
// Type: UnityEngine.UIElements::PointerType
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6453))
// CS Name: ::UnityEngine.UIElements::PointerType*
class CORDL_TYPE PointerType : public ::System::Object {
public:
  // Declarations
  /// @brief Field mouse, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mouse, put = setStaticF_mouse))::StringW mouse;

  /// @brief Field touch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_touch, put = setStaticF_touch))::StringW touch;

  /// @brief Field pen, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_pen, put = setStaticF_pen))::StringW pen;

  /// @brief Field unknown, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_unknown, put = setStaticF_unknown))::StringW unknown;

  static inline void setStaticF_mouse(::StringW value);

  static inline ::StringW getStaticF_mouse();

  static inline void setStaticF_touch(::StringW value);

  static inline ::StringW getStaticF_touch();

  static inline void setStaticF_pen(::StringW value);

  static inline ::StringW getStaticF_pen();

  static inline void setStaticF_unknown(::StringW value);

  static inline ::StringW getStaticF_unknown();

  /// @brief Method GetPointerType, addr 0x2e69fb0, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW GetPointerType(int32_t pointerId);

  /// @brief Method IsDirectManipulationDevice, addr 0x2e6a04c, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsDirectManipulationDevice(::StringW pointerType);

  // Ctor Parameters [CppParam { name: "", ty: "PointerType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerType(PointerType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerType(PointerType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerType();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerType, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerType);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerType*, "UnityEngine.UIElements", "PointerType");
