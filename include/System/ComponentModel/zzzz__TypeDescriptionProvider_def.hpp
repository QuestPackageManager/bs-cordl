#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeDescriptionProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CustomTypeDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
class TypeDescriptionProvider_EmptyCustomTypeDescriptor;
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
class TypeDescriptionProvider_EmptyCustomTypeDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptionProvider);
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor);
// Dependencies System.ComponentModel.CustomTypeDescriptor
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
class CORDL_TYPE TypeDescriptionProvider_EmptyCustomTypeDescriptor : public ::System::ComponentModel::CustomTypeDescriptor {
public:
  // Declarations
  static inline ::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor* New_ctor();

  /// @brief Method .ctor, addr 0x445bfac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptionProvider_EmptyCustomTypeDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProvider_EmptyCustomTypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptionProvider_EmptyCustomTypeDescriptor(TypeDescriptionProvider_EmptyCustomTypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProvider_EmptyCustomTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptionProvider_EmptyCustomTypeDescriptor(TypeDescriptionProvider_EmptyCustomTypeDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9424 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptionProvider
class CORDL_TYPE TypeDescriptionProvider : public ::System::Object {
public:
  // Declarations
  using EmptyCustomTypeDescriptor = ::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor;

  /// @brief Field _emptyDescriptor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyDescriptor,
                      put = __cordl_internal_set__emptyDescriptor)) ::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor* _emptyDescriptor;

  /// @brief Field _parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent)) ::System::ComponentModel::TypeDescriptionProvider* _parent;

  /// @brief Method CreateInstance, addr 0x445be00, size 0x10c, virtual true, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                          ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetCache, addr 0x445bf0c, size 0x18, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetExtendedTypeDescriptor, addr 0x445bf24, size 0x88, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance);

  /// @brief Method GetExtenderProviders, addr 0x445bfb4, size 0x100, virtual true, abstract: false, final false
  inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders(::System::Object* instance);

  /// @brief Method GetReflectionType, addr 0x445c0b4, size 0x10, virtual false, abstract: false, final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType);

  /// @brief Method GetReflectionType, addr 0x445c0c4, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method GetTypeDescriptor, addr 0x445c0f0, size 0x88, virtual false, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Object* instance);

  /// @brief Method GetTypeDescriptor, addr 0x445c0e0, size 0x10, virtual false, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType);

  /// @brief Method GetTypeDescriptor, addr 0x445c178, size 0x9c, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance);

  static inline ::System::ComponentModel::TypeDescriptionProvider* New_ctor();

  constexpr ::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor* const& __cordl_internal_get__emptyDescriptor() const;

  constexpr ::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor*& __cordl_internal_get__emptyDescriptor();

  constexpr ::System::ComponentModel::TypeDescriptionProvider* const& __cordl_internal_get__parent() const;

  constexpr ::System::ComponentModel::TypeDescriptionProvider*& __cordl_internal_get__parent();

  constexpr void __cordl_internal_set__emptyDescriptor(::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor* value);

  constexpr void __cordl_internal_set__parent(::System::ComponentModel::TypeDescriptionProvider* value);

  /// @brief Method .ctor, addr 0x4451bdc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9425 };

  /// @brief Field _parent, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::TypeDescriptionProvider* ____parent;

  /// @brief Field _emptyDescriptor, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor* ____emptyDescriptor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptionProvider, ____parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptionProvider, ____emptyDescriptor) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptionProvider, 0x20>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::TypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptionProvider*, "System.ComponentModel", "TypeDescriptionProvider");
NEED_NO_BOX(::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor*, "System.ComponentModel", "TypeDescriptionProvider/EmptyCustomTypeDescriptor");
