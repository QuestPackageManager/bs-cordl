#pragma once
// IWYU pragma private; include "System/ComponentModel/DelegatingTypeDescriptionProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
CORDL_MODULE_EXPORT(DelegatingTypeDescriptionProvider)
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
class TypeDescriptionProvider;
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
class DelegatingTypeDescriptionProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DelegatingTypeDescriptionProvider);
// Dependencies System.ComponentModel.TypeDescriptionProvider
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.DelegatingTypeDescriptionProvider
class CORDL_TYPE DelegatingTypeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider {
public:
  // Declarations
  __declspec(property(get = get_Provider)) ::System::ComponentModel::TypeDescriptionProvider* Provider;

  /// @brief Field _type, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::System::Type* _type;

  /// @brief Method CreateInstance, addr 0x4453484, size 0x50, virtual true, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                          ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetCache, addr 0x44534d4, size 0x28, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetExtendedTypeDescriptor, addr 0x44534fc, size 0x28, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance);

  /// @brief Method GetExtenderProviders, addr 0x4453524, size 0x28, virtual true, abstract: false, final false
  inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders(::System::Object* instance);

  /// @brief Method GetReflectionType, addr 0x445354c, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method GetTypeDescriptor, addr 0x4453584, size 0x38, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance);

  static inline ::System::ComponentModel::DelegatingTypeDescriptionProvider* New_ctor(::System::Type* type);

  constexpr ::System::Type* const& __cordl_internal_get__type() const;

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x44533f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_Provider, addr 0x4453428, size 0x5c, virtual false, abstract: false, final false
  inline ::System::ComponentModel::TypeDescriptionProvider* get_Provider();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegatingTypeDescriptionProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegatingTypeDescriptionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegatingTypeDescriptionProvider(DelegatingTypeDescriptionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegatingTypeDescriptionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegatingTypeDescriptionProvider(DelegatingTypeDescriptionProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9378 };

  /// @brief Field _type, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::DelegatingTypeDescriptionProvider, ____type) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DelegatingTypeDescriptionProvider, 0x28>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DelegatingTypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DelegatingTypeDescriptionProvider*, "System.ComponentModel", "DelegatingTypeDescriptionProvider");
