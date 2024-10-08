#pragma once
// IWYU pragma private; include "Zenject/IProviderExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IProviderExtensions)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class IProviderExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IProviderExtensions);
// Type: Zenject::IProviderExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::IProviderExtensions*
class CORDL_TYPE IProviderExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyArgList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyArgList, put = setStaticF_EmptyArgList)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* EmptyArgList;

  /// @brief Method GetAllInstances, addr 0x4ac26d4, size 0xf8, virtual false, abstract: false, final false
  static inline void GetAllInstances(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                     ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetAllInstances, addr 0x4ac265c, size 0x78, virtual false, abstract: false, final false
  static inline void GetAllInstances(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x4ac2560, size 0xfc, virtual false, abstract: false, final false
  static inline void GetAllInstancesWithInjectSplit(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ByRef<::System::Action*> injectAction,
                                                    ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstance, addr 0x4ac2a28, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Object* GetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context);

  /// @brief Method GetInstance, addr 0x4ac2a98, size 0x23c, virtual false, abstract: false, final false
  static inline ::System::Object* GetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args);

  /// @brief Method TryGetInstance, addr 0x4ac27cc, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Object* TryGetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context);

  /// @brief Method TryGetInstance, addr 0x4ac283c, size 0x1ec, virtual false, abstract: false, final false
  static inline ::System::Object* TryGetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args);

  static inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* getStaticF_EmptyArgList();

  static inline void setStaticF_EmptyArgList(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IProviderExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IProviderExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IProviderExtensions(IProviderExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IProviderExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IProviderExtensions(IProviderExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12504 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::IProviderExtensions, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::IProviderExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IProviderExtensions*, "Zenject", "IProviderExtensions");
