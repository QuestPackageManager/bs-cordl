#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExtendedPropertyDescriptor)
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class ReflectPropertyDescriptor;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ExtendedPropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ExtendedPropertyDescriptor);
// Type: System.ComponentModel::ExtendedPropertyDescriptor
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9444))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9427))
// CS Name: ::System.ComponentModel::ExtendedPropertyDescriptor*
class CORDL_TYPE ExtendedPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  /// @brief Field _extenderInfo, offset 0x88, size 0x8
  __declspec(property(get = __get__extenderInfo, put = __set__extenderInfo))::System::ComponentModel::ReflectPropertyDescriptor* _extenderInfo;

  /// @brief Field _provider, offset 0x90, size 0x8
  __declspec(property(get = __get__provider, put = __set__provider))::System::ComponentModel::IExtenderProvider* _provider;

  __declspec(property(get = get_ComponentType))::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType))::System::Type* PropertyType;

  __declspec(property(get = get_DisplayName))::StringW DisplayName;

  constexpr ::System::ComponentModel::ReflectPropertyDescriptor*& __get__extenderInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ReflectPropertyDescriptor*> const& __get__extenderInfo() const;

  constexpr void __set__extenderInfo(::System::ComponentModel::ReflectPropertyDescriptor* value);

  constexpr ::System::ComponentModel::IExtenderProvider*& __get__provider();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::IExtenderProvider*> const& __get__provider() const;

  constexpr void __set__provider(::System::ComponentModel::IExtenderProvider* value);

  static inline ::System::ComponentModel::ExtendedPropertyDescriptor* New_ctor(::System::ComponentModel::ReflectPropertyDescriptor* extenderInfo, ::System::Type* receiverType,
                                                                               ::System::ComponentModel::IExtenderProvider* provider,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method .ctor, addr 0x291007c, size 0x250, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ReflectPropertyDescriptor* extenderInfo, ::System::Type* receiverType, ::System::ComponentModel::IExtenderProvider* provider,
                    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method CanResetValue, addr 0x291034c, size 0x28, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* comp);

  /// @brief Method get_ComponentType, addr 0x2910374, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly, addr 0x2910398, size 0xf8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x2910490, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method get_DisplayName, addr 0x29104b4, size 0x1dc, virtual true, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method GetValue, addr 0x2910690, size 0x28, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* comp);

  /// @brief Method ResetValue, addr 0x29106b8, size 0x28, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* comp);

  /// @brief Method SetValue, addr 0x29106e0, size 0x2c, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x291070c, size 0x28, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* comp);

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtendedPropertyDescriptor(ExtendedPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtendedPropertyDescriptor(ExtendedPropertyDescriptor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtendedPropertyDescriptor();

public:
  /// @brief Field _extenderInfo, offset: 0x88, size: 0x8, def value: None
  ::System::ComponentModel::ReflectPropertyDescriptor* ____extenderInfo;

  /// @brief Field _provider, offset: 0x90, size: 0x8, def value: None
  ::System::ComponentModel::IExtenderProvider* ____provider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ExtendedPropertyDescriptor, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ExtendedPropertyDescriptor, ____extenderInfo) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ExtendedPropertyDescriptor, ____provider) == 0x90, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ExtendedPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ExtendedPropertyDescriptor*, "System.ComponentModel", "ExtendedPropertyDescriptor");
