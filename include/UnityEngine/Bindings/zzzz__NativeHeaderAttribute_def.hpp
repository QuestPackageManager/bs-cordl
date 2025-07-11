#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NativeHeaderAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NativeHeaderAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeHeaderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NativeHeaderAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.NativeHeaderAttribute
class CORDL_TYPE NativeHeaderAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_Header)) ::StringW Header;

  /// @brief Field <Header>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Header_k__BackingField, put = __cordl_internal_set__Header_k__BackingField)) ::StringW _Header_k__BackingField;

  static inline ::UnityEngine::Bindings::NativeHeaderAttribute* New_ctor(::StringW header);

  constexpr ::StringW const& __cordl_internal_get__Header_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Header_k__BackingField();

  constexpr void __cordl_internal_set__Header_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4918ae0, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::StringW header);

  /// @brief Method set_Header, addr 0x4918ad8, size 0x8, virtual true, abstract: false, final true
  inline void set_Header(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeHeaderAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeHeaderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeHeaderAttribute(NativeHeaderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeHeaderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeHeaderAttribute(NativeHeaderAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18708 };

  /// @brief Field <Header>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Header_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::NativeHeaderAttribute, ____Header_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeHeaderAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeHeaderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeHeaderAttribute*, "UnityEngine.Bindings", "NativeHeaderAttribute");
