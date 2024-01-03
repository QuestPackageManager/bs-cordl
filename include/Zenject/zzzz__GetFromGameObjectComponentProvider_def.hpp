#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(GetFromGameObjectComponentProvider)
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
class GetFromGameObjectComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GetFromGameObjectComponentProvider);
// Type: Zenject::GetFromGameObjectComponentProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11187))
// CS Name: ::Zenject::GetFromGameObjectComponentProvider*
class CORDL_TYPE GetFromGameObjectComponentProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameObject, offset 0x10, size 0x8
  __declspec(property(get = __get__gameObject, put = __set__gameObject))::UnityEngine::GameObject* _gameObject;

  /// @brief Field _componentType, offset 0x18, size 0x8
  __declspec(property(get = __get__componentType, put = __set__componentType))::System::Type* _componentType;

  /// @brief Field _matchSingle, offset 0x20, size 0x1
  __declspec(property(get = __get__matchSingle, put = __set__matchSingle)) bool _matchSingle;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

  constexpr ::UnityEngine::GameObject*& __get__gameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__gameObject() const;

  constexpr void __set__gameObject(::UnityEngine::GameObject* value);

  constexpr ::System::Type*& __get__componentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__componentType() const;

  constexpr void __set__componentType(::System::Type* value);

  constexpr bool& __get__matchSingle();

  constexpr bool const& __get__matchSingle() const;

  constexpr void __set__matchSingle(bool value);

  static inline ::Zenject::GetFromGameObjectComponentProvider* New_ctor(::System::Type* componentType, ::UnityEngine::GameObject* gameObject, bool matchSingle);

  /// @brief Method .ctor, addr 0x2f06c54, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* componentType, ::UnityEngine::GameObject* gameObject, bool matchSingle);

  /// @brief Method get_IsCached, addr 0x2f06c90, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x2f06c98, size 0x8, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method GetInstanceType, addr 0x2f06ca0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x2f06ca8, size 0x1b4, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "GetFromGameObjectComponentProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetFromGameObjectComponentProvider(GetFromGameObjectComponentProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetFromGameObjectComponentProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetFromGameObjectComponentProvider(GetFromGameObjectComponentProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetFromGameObjectComponentProvider();

public:
  /// @brief Field _gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____gameObject;

  /// @brief Field _componentType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____componentType;

  /// @brief Field _matchSingle, offset: 0x20, size: 0x1, def value: None
  bool ____matchSingle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::GetFromGameObjectComponentProvider, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::GetFromGameObjectComponentProvider, ____gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::GetFromGameObjectComponentProvider, ____componentType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::GetFromGameObjectComponentProvider, ____matchSingle) == 0x20, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::GetFromGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GetFromGameObjectComponentProvider*, "Zenject", "GetFromGameObjectComponentProvider");
