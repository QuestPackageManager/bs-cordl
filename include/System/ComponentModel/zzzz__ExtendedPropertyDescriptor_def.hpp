#pragma once
// IWYU pragma private; include "System/ComponentModel/ExtendedPropertyDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
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
// Dependencies System.ComponentModel.PropertyDescriptor
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ExtendedPropertyDescriptor
class CORDL_TYPE ExtendedPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  __declspec(property(get = get_ComponentType)) ::System::Type* ComponentType;

  __declspec(property(get = get_DisplayName)) ::StringW DisplayName;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType)) ::System::Type* PropertyType;

  /// @brief Field _extenderInfo, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__extenderInfo, put = __cordl_internal_set__extenderInfo)) ::System::ComponentModel::ReflectPropertyDescriptor* _extenderInfo;

  /// @brief Field _provider, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__provider, put = __cordl_internal_set__provider)) ::System::ComponentModel::IExtenderProvider* _provider;

  /// @brief Method CanResetValue, addr 0x4458080, size 0x28, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* comp);

  /// @brief Method GetValue, addr 0x44583c4, size 0x28, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* comp);

  static inline ::System::ComponentModel::ExtendedPropertyDescriptor* New_ctor(::System::ComponentModel::ReflectPropertyDescriptor* extenderInfo, ::System::Type* receiverType,
                                                                               ::System::ComponentModel::IExtenderProvider* provider,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method ResetValue, addr 0x44583ec, size 0x28, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* comp);

  /// @brief Method SetValue, addr 0x4458414, size 0x2c, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x4458440, size 0x28, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* comp);

  constexpr ::System::ComponentModel::ReflectPropertyDescriptor* const& __cordl_internal_get__extenderInfo() const;

  constexpr ::System::ComponentModel::ReflectPropertyDescriptor*& __cordl_internal_get__extenderInfo();

  constexpr ::System::ComponentModel::IExtenderProvider* const& __cordl_internal_get__provider() const;

  constexpr ::System::ComponentModel::IExtenderProvider*& __cordl_internal_get__provider();

  constexpr void __cordl_internal_set__extenderInfo(::System::ComponentModel::ReflectPropertyDescriptor* value);

  constexpr void __cordl_internal_set__provider(::System::ComponentModel::IExtenderProvider* value);

  /// @brief Method .ctor, addr 0x4457db4, size 0x24c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ReflectPropertyDescriptor* extenderInfo, ::System::Type* receiverType, ::System::ComponentModel::IExtenderProvider* provider,
                    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method get_ComponentType, addr 0x44580a8, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_DisplayName, addr 0x44581e8, size 0x1dc, virtual true, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_IsReadOnly, addr 0x44580cc, size 0xf8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x44581c4, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtendedPropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtendedPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtendedPropertyDescriptor(ExtendedPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtendedPropertyDescriptor(ExtendedPropertyDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9388 };

  /// @brief Field _extenderInfo, offset: 0x88, size: 0x8, def value: None
  ::System::ComponentModel::ReflectPropertyDescriptor* ____extenderInfo;

  /// @brief Field _provider, offset: 0x90, size: 0x8, def value: None
  ::System::ComponentModel::IExtenderProvider* ____provider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ExtendedPropertyDescriptor, ____extenderInfo) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ExtendedPropertyDescriptor, ____provider) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ExtendedPropertyDescriptor, 0x98>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ExtendedPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ExtendedPropertyDescriptor*, "System.ComponentModel", "ExtendedPropertyDescriptor");
