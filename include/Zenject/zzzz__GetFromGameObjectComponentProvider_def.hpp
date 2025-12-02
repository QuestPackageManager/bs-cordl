#pragma once
// IWYU pragma private; include "Zenject/GetFromGameObjectComponentProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.GetFromGameObjectComponentProvider
class CORDL_TYPE GetFromGameObjectComponentProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _componentType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__componentType, put = __cordl_internal_set__componentType)) ::System::Type* _componentType;

  /// @brief Field _gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObject, put = __cordl_internal_set__gameObject)) ::UnityW<::UnityEngine::GameObject> _gameObject;

  /// @brief Field _matchSingle, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__matchSingle, put = __cordl_internal_set__matchSingle)) bool _matchSingle;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x6c50d80, size 0x1d4, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x6c50d78, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::GetFromGameObjectComponentProvider* New_ctor(::System::Type* componentType, ::UnityEngine::GameObject* gameObject, bool matchSingle);

  constexpr ::System::Type* const& __cordl_internal_get__componentType() const;

  constexpr ::System::Type*& __cordl_internal_get__componentType();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__gameObject();

  constexpr bool const& __cordl_internal_get__matchSingle() const;

  constexpr bool& __cordl_internal_get__matchSingle();

  constexpr void __cordl_internal_set__componentType(::System::Type* value);

  constexpr void __cordl_internal_set__gameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__matchSingle(bool value);

  /// @brief Method .ctor, addr 0x6c50d5c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* componentType, ::UnityEngine::GameObject* gameObject, bool matchSingle);

  /// @brief Method get_IsCached, addr 0x6c50d68, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x6c50d70, size 0x8, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetFromGameObjectComponentProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetFromGameObjectComponentProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetFromGameObjectComponentProvider(GetFromGameObjectComponentProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetFromGameObjectComponentProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetFromGameObjectComponentProvider(GetFromGameObjectComponentProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14510 };

  /// @brief Field _gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____gameObject;

  /// @brief Field _componentType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____componentType;

  /// @brief Field _matchSingle, offset: 0x20, size: 0x1, def value: None
  bool ____matchSingle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::GetFromGameObjectComponentProvider, ____gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::GetFromGameObjectComponentProvider, ____componentType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::GetFromGameObjectComponentProvider, ____matchSingle) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::GetFromGameObjectComponentProvider, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::GetFromGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GetFromGameObjectComponentProvider*, "Zenject", "GetFromGameObjectComponentProvider");
