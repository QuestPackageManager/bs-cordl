#pragma once
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
// Type: UnityEngine.Bindings::NativeHeaderAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16014))
// CS Name: ::UnityEngine.Bindings::NativeHeaderAttribute*
class CORDL_TYPE NativeHeaderAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Header>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Header_k__BackingField, put = __set__Header_k__BackingField))::StringW _Header_k__BackingField;

  __declspec(property(put = set_Header))::StringW Header;

  constexpr ::StringW& __get__Header_k__BackingField();

  constexpr ::StringW const& __get__Header_k__BackingField() const;

  constexpr void __set__Header_k__BackingField(::StringW value);

  /// @brief Method set_Header addr 0x2d18270 size 0x8 virtual true final true
  inline void set_Header(::StringW value);

  static inline ::UnityEngine::Bindings::NativeHeaderAttribute* New_ctor(::StringW header);

  /// @brief Method .ctor addr 0x2d18278 size 0x104 virtual false final false
  inline void _ctor(::StringW header);

  // Ctor Parameters [CppParam { name: "", ty: "NativeHeaderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeHeaderAttribute(NativeHeaderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeHeaderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeHeaderAttribute(NativeHeaderAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeHeaderAttribute();

public:
  /// @brief Field <Header>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Header_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeHeaderAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeHeaderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeHeaderAttribute*, "UnityEngine.Bindings", "NativeHeaderAttribute");
