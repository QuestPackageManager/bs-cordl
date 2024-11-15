#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeDescriptionProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CustomTypeDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TypeDescriptionProvider)
namespace System::Collections {
class IDictionary;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class __TypeDescriptionProvider__EmptyCustomTypeDescriptor;
}
namespace System {
class IServiceProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class TypeDescriptionProvider;
}
namespace System::ComponentModel {
class __TypeDescriptionProvider__EmptyCustomTypeDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptionProvider);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor);
// Type: ::EmptyCustomTypeDescriptor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptionProvider::EmptyCustomTypeDescriptor*
class CORDL_TYPE __TypeDescriptionProvider__EmptyCustomTypeDescriptor : public ::System::ComponentModel::CustomTypeDescriptor {
public:
  // Declarations
  static inline ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor* New_ctor();

  /// @brief Method .ctor, addr 0x43f9278, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptionProvider__EmptyCustomTypeDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptionProvider__EmptyCustomTypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptionProvider__EmptyCustomTypeDescriptor(__TypeDescriptionProvider__EmptyCustomTypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptionProvider__EmptyCustomTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptionProvider__EmptyCustomTypeDescriptor(__TypeDescriptionProvider__EmptyCustomTypeDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9394 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::TypeDescriptionProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::TypeDescriptionProvider*
class CORDL_TYPE TypeDescriptionProvider : public ::System::Object {
public:
  // Declarations
  using EmptyCustomTypeDescriptor = ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor;

  /// @brief Field _emptyDescriptor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyDescriptor,
                      put = __cordl_internal_set__emptyDescriptor)) ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor* _emptyDescriptor;

  /// @brief Field _parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent)) ::System::ComponentModel::TypeDescriptionProvider* _parent;

  /// @brief Method CreateInstance, addr 0x43f90cc, size 0x10c, virtual true, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                          ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetCache, addr 0x43f91d8, size 0x18, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetExtendedTypeDescriptor, addr 0x43f91f0, size 0x88, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance);

  /// @brief Method GetExtenderProviders, addr 0x43f9280, size 0x100, virtual true, abstract: false, final false
  inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders(::System::Object* instance);

  /// @brief Method GetReflectionType, addr 0x43f9380, size 0x10, virtual false, abstract: false, final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType);

  /// @brief Method GetReflectionType, addr 0x43f9390, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method GetTypeDescriptor, addr 0x43f93bc, size 0x88, virtual false, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Object* instance);

  /// @brief Method GetTypeDescriptor, addr 0x43f93ac, size 0x10, virtual false, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType);

  /// @brief Method GetTypeDescriptor, addr 0x43f9444, size 0x9c, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance);

  static inline ::System::ComponentModel::TypeDescriptionProvider* New_ctor();

  constexpr ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*& __cordl_internal_get__emptyDescriptor();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*> const& __cordl_internal_get__emptyDescriptor() const;

  constexpr ::System::ComponentModel::TypeDescriptionProvider*& __cordl_internal_get__parent();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeDescriptionProvider*> const& __cordl_internal_get__parent() const;

  constexpr void __cordl_internal_set__emptyDescriptor(::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor* value);

  constexpr void __cordl_internal_set__parent(::System::ComponentModel::TypeDescriptionProvider* value);

  /// @brief Method .ctor, addr 0x43eeea8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptionProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptionProvider(TypeDescriptionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptionProvider(TypeDescriptionProvider const&) = delete;

  /// @brief Field _parent, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::TypeDescriptionProvider* ____parent;

  /// @brief Field _emptyDescriptor, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor* ____emptyDescriptor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9395 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptionProvider, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptionProvider, ____parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptionProvider, ____emptyDescriptor) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::TypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptionProvider*, "System.ComponentModel", "TypeDescriptionProvider");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*, "System.ComponentModel", "TypeDescriptionProvider/EmptyCustomTypeDescriptor");
