#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CustomTypeDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TypeDescriptionProvider)
namespace System::ComponentModel {
class __TypeDescriptionProvider__EmptyCustomTypeDescriptor;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::Collections {
class IDictionary;
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9414))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9459))
// CS Name: ::TypeDescriptionProvider::EmptyCustomTypeDescriptor*
class CORDL_TYPE __TypeDescriptionProvider__EmptyCustomTypeDescriptor : public ::System::ComponentModel::CustomTypeDescriptor {
public:
  // Declarations
  static inline ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor* New_ctor();

  /// @brief Method .ctor, addr 0x291904c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptionProvider__EmptyCustomTypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptionProvider__EmptyCustomTypeDescriptor(__TypeDescriptionProvider__EmptyCustomTypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptionProvider__EmptyCustomTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptionProvider__EmptyCustomTypeDescriptor(__TypeDescriptionProvider__EmptyCustomTypeDescriptor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptionProvider__EmptyCustomTypeDescriptor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::TypeDescriptionProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9460))
// CS Name: ::System.ComponentModel::TypeDescriptionProvider*
class CORDL_TYPE TypeDescriptionProvider : public ::System::Object {
public:
  // Declarations
  using EmptyCustomTypeDescriptor = ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor;

  /// @brief Field _parent, offset 0x10, size 0x8
  __declspec(property(get = __get__parent, put = __set__parent))::System::ComponentModel::TypeDescriptionProvider* _parent;

  /// @brief Field _emptyDescriptor, offset 0x18, size 0x8
  __declspec(property(get = __get__emptyDescriptor, put = __set__emptyDescriptor))::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor* _emptyDescriptor;

  constexpr ::System::ComponentModel::TypeDescriptionProvider*& __get__parent();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeDescriptionProvider*> const& __get__parent() const;

  constexpr void __set__parent(::System::ComponentModel::TypeDescriptionProvider* value);

  constexpr ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*& __get__emptyDescriptor();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*> const& __get__emptyDescriptor() const;

  constexpr void __set__emptyDescriptor(::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor* value);

  static inline ::System::ComponentModel::TypeDescriptionProvider* New_ctor();

  /// @brief Method .ctor, addr 0x2918f9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GetCache, addr 0x2918fa4, size 0x18, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetExtendedTypeDescriptor, addr 0x2918fbc, size 0x90, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance);

  /// @brief Method GetExtenderProviders, addr 0x2919054, size 0xf4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders(::System::Object* instance);

  /// @brief Method GetReflectionType, addr 0x2919148, size 0x10, virtual false, abstract: false, final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType);

  /// @brief Method GetReflectionType, addr 0x2919158, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method GetTypeDescriptor, addr 0x2919174, size 0x10, virtual false, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType);

  /// @brief Method GetTypeDescriptor, addr 0x2919184, size 0x8c, virtual false, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Object* instance);

  /// @brief Method GetTypeDescriptor, addr 0x2919210, size 0xa4, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance);

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptionProvider(TypeDescriptionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptionProvider(TypeDescriptionProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptionProvider();

public:
  /// @brief Field _parent, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::TypeDescriptionProvider* ____parent;

  /// @brief Field _emptyDescriptor, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor* ____emptyDescriptor;

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
