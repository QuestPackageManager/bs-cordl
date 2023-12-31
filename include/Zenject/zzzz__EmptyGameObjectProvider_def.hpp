#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(EmptyGameObjectProvider)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectCreationParameters;
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
class EmptyGameObjectProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::EmptyGameObjectProvider);
// Type: Zenject::EmptyGameObjectProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11191))
// CS Name: ::Zenject::EmptyGameObjectProvider*
class CORDL_TYPE EmptyGameObjectProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _gameObjectBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __get__gameObjectBindInfo, put = __set__gameObjectBindInfo))::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get__gameObjectBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get__gameObjectBindInfo() const;

  constexpr void __set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  static inline ::Zenject::EmptyGameObjectProvider* New_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method .ctor, addr 0x2f075ec, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method get_IsCached, addr 0x2f07618, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x2f07620, size 0x8, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method GetInstanceType, addr 0x2f07628, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x2f07694, size 0x108, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "EmptyGameObjectProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyGameObjectProvider(EmptyGameObjectProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyGameObjectProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyGameObjectProvider(EmptyGameObjectProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyGameObjectProvider();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _gameObjectBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ____gameObjectBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::EmptyGameObjectProvider, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::EmptyGameObjectProvider, ____container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::EmptyGameObjectProvider, ____gameObjectBindInfo) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::EmptyGameObjectProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::EmptyGameObjectProvider*, "Zenject", "EmptyGameObjectProvider");
