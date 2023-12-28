#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(GetFromGameObjectGetterComponentProvider)
namespace Zenject {
class IProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Action;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class GetFromGameObjectGetterComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GetFromGameObjectGetterComponentProvider);
// Type: Zenject::GetFromGameObjectGetterComponentProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11188))
// CS Name: ::Zenject::GetFromGameObjectGetterComponentProvider*
class CORDL_TYPE GetFromGameObjectGetterComponentProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameObjectGetter, offset 0x10, size 0x8
  __declspec(property(get = __get__gameObjectGetter, put = __set__gameObjectGetter))::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* _gameObjectGetter;

  /// @brief Field _componentType, offset 0x18, size 0x8
  __declspec(property(get = __get__componentType, put = __set__componentType))::System::Type* _componentType;

  /// @brief Field _matchSingle, offset 0x20, size 0x1
  __declspec(property(get = __get__matchSingle, put = __set__matchSingle)) bool _matchSingle;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*& __get__gameObjectGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>*> const& __get__gameObjectGetter() const;

  constexpr void __set__gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* value);

  constexpr ::System::Type*& __get__componentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__componentType() const;

  constexpr void __set__componentType(::System::Type* value);

  constexpr bool& __get__matchSingle();

  constexpr bool const& __get__matchSingle() const;

  constexpr void __set__matchSingle(bool value);

  static inline ::Zenject::GetFromGameObjectGetterComponentProvider* New_ctor(::System::Type* componentType, ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* gameObjectGetter,
                                                                              bool matchSingle);

  /// @brief Method .ctor addr 0x2f06e5c size 0x3c virtual false final false
  inline void _ctor(::System::Type* componentType, ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* gameObjectGetter, bool matchSingle);

  /// @brief Method get_IsCached addr 0x2f06e98 size 0x8 virtual true final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType addr 0x2f06ea0 size 0x8 virtual true final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method GetInstanceType addr 0x2f06ea8 size 0x8 virtual true final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x2f06eb0 size 0x234 virtual true final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "GetFromGameObjectGetterComponentProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetFromGameObjectGetterComponentProvider(GetFromGameObjectGetterComponentProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetFromGameObjectGetterComponentProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetFromGameObjectGetterComponentProvider(GetFromGameObjectGetterComponentProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetFromGameObjectGetterComponentProvider();

public:
  /// @brief Field _gameObjectGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityEngine::GameObject*>* ____gameObjectGetter;

  /// @brief Field _componentType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____componentType;

  /// @brief Field _matchSingle, offset: 0x20, size: 0x1, def value: None
  bool ____matchSingle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::GetFromGameObjectGetterComponentProvider, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::GetFromGameObjectGetterComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GetFromGameObjectGetterComponentProvider*, "Zenject", "GetFromGameObjectGetterComponentProvider");
