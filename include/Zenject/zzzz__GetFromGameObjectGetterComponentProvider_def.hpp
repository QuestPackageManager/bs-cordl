#pragma once
// IWYU pragma private; include "Zenject/GetFromGameObjectGetterComponentProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(GetFromGameObjectGetterComponentProvider)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
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
class GetFromGameObjectGetterComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GetFromGameObjectGetterComponentProvider);
// Type: Zenject::GetFromGameObjectGetterComponentProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::GetFromGameObjectGetterComponentProvider*
class CORDL_TYPE GetFromGameObjectGetterComponentProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _componentType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__componentType, put = __cordl_internal_set__componentType)) ::System::Type* _componentType;

  /// @brief Field _gameObjectGetter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectGetter,
                      put = __cordl_internal_set__gameObjectGetter)) ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* _gameObjectGetter;

  /// @brief Field _matchSingle, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__matchSingle, put = __cordl_internal_set__matchSingle)) bool _matchSingle;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x4ac1864, size 0x210, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x4ac185c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::GetFromGameObjectGetterComponentProvider* New_ctor(::System::Type* componentType,
                                                                              ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter, bool matchSingle);

  constexpr ::System::Type*& __cordl_internal_get__componentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__componentType() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__gameObjectGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__gameObjectGetter() const;

  constexpr bool const& __cordl_internal_get__matchSingle() const;

  constexpr bool& __cordl_internal_get__matchSingle();

  constexpr void __cordl_internal_set__componentType(::System::Type* value);

  constexpr void __cordl_internal_set__gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set__matchSingle(bool value);

  /// @brief Method .ctor, addr 0x4ac1810, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* componentType, ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter, bool matchSingle);

  /// @brief Method get_IsCached, addr 0x4ac184c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x4ac1854, size 0x8, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetFromGameObjectGetterComponentProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetFromGameObjectGetterComponentProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetFromGameObjectGetterComponentProvider(GetFromGameObjectGetterComponentProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetFromGameObjectGetterComponentProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetFromGameObjectGetterComponentProvider(GetFromGameObjectGetterComponentProvider const&) = delete;

  /// @brief Field _gameObjectGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* ____gameObjectGetter;

  /// @brief Field _componentType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____componentType;

  /// @brief Field _matchSingle, offset: 0x20, size: 0x1, def value: None
  bool ____matchSingle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12487 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::GetFromGameObjectGetterComponentProvider, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::GetFromGameObjectGetterComponentProvider, ____gameObjectGetter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::GetFromGameObjectGetterComponentProvider, ____componentType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::GetFromGameObjectGetterComponentProvider, ____matchSingle) == 0x20, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::GetFromGameObjectGetterComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GetFromGameObjectGetterComponentProvider*, "Zenject", "GetFromGameObjectGetterComponentProvider");
