#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IProviderExtensions)
namespace Zenject {
class IProvider;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Zenject {
class IProviderExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IProviderExtensions);
// Type: Zenject::IProviderExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11205))
// CS Name: ::Zenject::IProviderExtensions*
class CORDL_TYPE IProviderExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyArgList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyArgList, put = setStaticF_EmptyArgList))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* EmptyArgList;

  static inline void setStaticF_EmptyArgList(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  static inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* getStaticF_EmptyArgList();

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x2f07bdc size 0xfc virtual false final false
  static inline void GetAllInstancesWithInjectSplit(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ByRef<::System::Action*> injectAction,
                                                    ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetAllInstances addr 0x2f07cd8 size 0x78 virtual false final false
  static inline void GetAllInstances(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetAllInstances addr 0x2f07d50 size 0xf8 virtual false final false
  static inline void GetAllInstances(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                     ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method TryGetInstance addr 0x2f07e48 size 0x70 virtual false final false
  static inline ::System::Object* TryGetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context);

  /// @brief Method TryGetInstance addr 0x2f07eb8 size 0x1ec virtual false final false
  static inline ::System::Object* TryGetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args);

  /// @brief Method GetInstance addr 0x2f080a4 size 0x70 virtual false final false
  static inline ::System::Object* GetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context);

  /// @brief Method GetInstance addr 0x2f08114 size 0x23c virtual false final false
  static inline ::System::Object* GetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args);

  // Ctor Parameters [CppParam { name: "", ty: "IProviderExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IProviderExtensions(IProviderExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IProviderExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IProviderExtensions(IProviderExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IProviderExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::IProviderExtensions, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::IProviderExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IProviderExtensions*, "Zenject", "IProviderExtensions");
