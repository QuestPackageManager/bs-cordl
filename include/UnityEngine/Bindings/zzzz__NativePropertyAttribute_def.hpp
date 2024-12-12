#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NativePropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_def.hpp"
#include "UnityEngine/Bindings/zzzz__TargetType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NativePropertyAttribute)
namespace UnityEngine::Bindings {
struct TargetType;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class NativePropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NativePropertyAttribute);
// Dependencies UnityEngine.Bindings.NativeMethodAttribute, UnityEngine.Bindings.TargetType
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.NativePropertyAttribute
class CORDL_TYPE NativePropertyAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute {
public:
  // Declarations
  __declspec(property(put = set_TargetType)) ::UnityEngine::Bindings::TargetType TargetType;

  /// @brief Field <TargetType>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__TargetType_k__BackingField, put = __cordl_internal_set__TargetType_k__BackingField)) ::UnityEngine::Bindings::TargetType _TargetType_k__BackingField;

  static inline ::UnityEngine::Bindings::NativePropertyAttribute* New_ctor();

  static inline ::UnityEngine::Bindings::NativePropertyAttribute* New_ctor(::StringW name);

  static inline ::UnityEngine::Bindings::NativePropertyAttribute* New_ctor(::StringW name, bool isFree, ::UnityEngine::Bindings::TargetType targetType);

  static inline ::UnityEngine::Bindings::NativePropertyAttribute* New_ctor(::StringW name, bool isFree, ::UnityEngine::Bindings::TargetType targetType, bool isThreadSafe);

  constexpr ::UnityEngine::Bindings::TargetType const& __cordl_internal_get__TargetType_k__BackingField() const;

  constexpr ::UnityEngine::Bindings::TargetType& __cordl_internal_get__TargetType_k__BackingField();

  constexpr void __cordl_internal_set__TargetType_k__BackingField(::UnityEngine::Bindings::TargetType value);

  /// @brief Method .ctor, addr 0x4916760, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4916768, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x491676c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, bool isFree, ::UnityEngine::Bindings::TargetType targetType);

  /// @brief Method .ctor, addr 0x491679c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, bool isFree, ::UnityEngine::Bindings::TargetType targetType, bool isThreadSafe);

  /// @brief Method set_TargetType, addr 0x4916758, size 0x8, virtual false, abstract: false, final false
  inline void set_TargetType(::UnityEngine::Bindings::TargetType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativePropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativePropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativePropertyAttribute(NativePropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativePropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativePropertyAttribute(NativePropertyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18701 };

  /// @brief Field <TargetType>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Bindings::TargetType ____TargetType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::NativePropertyAttribute, ____TargetType_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativePropertyAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativePropertyAttribute*, "UnityEngine.Bindings", "NativePropertyAttribute");
