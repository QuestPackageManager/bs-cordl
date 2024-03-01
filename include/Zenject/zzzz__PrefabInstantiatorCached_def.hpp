#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PrefabInstantiatorCached)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class PrefabInstantiatorCached;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabInstantiatorCached);
// Type: Zenject::PrefabInstantiatorCached
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::PrefabInstantiatorCached*
class CORDL_TYPE PrefabInstantiatorCached : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ArgumentTarget))::System::Type* ArgumentTarget;

  __declspec(property(get = get_ExtraArguments))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ExtraArguments;

  __declspec(property(get = get_GameObjectCreationParameters))::Zenject::GameObjectCreationParameters* GameObjectCreationParameters;

  /// @brief Field _gameObject, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObject, put = __cordl_internal_set__gameObject))::UnityW<::UnityEngine::GameObject> _gameObject;

  /// @brief Field _subInstantiator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__subInstantiator, put = __cordl_internal_set__subInstantiator))::Zenject::IPrefabInstantiator* _subInstantiator;

  /// @brief Convert operator to "::Zenject::IPrefabInstantiator"
  constexpr operator ::Zenject::IPrefabInstantiator*() noexcept;

  /// @brief Method GetPrefab, addr 0x3019250, size 0xa4, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Object> GetPrefab();

  /// @brief Method Instantiate, addr 0x30192f4, size 0x17c, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> Instantiate(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                         ByRef<::System::Action*> injectAction);

  static inline ::Zenject::PrefabInstantiatorCached* New_ctor(::Zenject::IPrefabInstantiator* subInstantiator);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__gameObject();

  constexpr ::Zenject::IPrefabInstantiator*& __cordl_internal_get__subInstantiator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabInstantiator*> const& __cordl_internal_get__subInstantiator() const;

  constexpr void __cordl_internal_set__gameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__subInstantiator(::Zenject::IPrefabInstantiator* value);

  /// @brief Method .ctor, addr 0x3019040, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IPrefabInstantiator* subInstantiator);

  /// @brief Method get_ArgumentTarget, addr 0x301910c, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Type* get_ArgumentTarget();

  /// @brief Method get_ExtraArguments, addr 0x3019068, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* get_ExtraArguments();

  /// @brief Method get_GameObjectCreationParameters, addr 0x30191ac, size 0xa4, virtual true, abstract: false, final true
  inline ::Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();

  /// @brief Convert to "::Zenject::IPrefabInstantiator"
  constexpr ::Zenject::IPrefabInstantiator* i___Zenject__IPrefabInstantiator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabInstantiatorCached();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiatorCached", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabInstantiatorCached(PrefabInstantiatorCached&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiatorCached", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabInstantiatorCached(PrefabInstantiatorCached const&) = delete;

  /// @brief Field _subInstantiator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IPrefabInstantiator* ____subInstantiator;

  /// @brief Field _gameObject, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____gameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PrefabInstantiatorCached, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiatorCached, ____subInstantiator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiatorCached, ____gameObject) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PrefabInstantiatorCached);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabInstantiatorCached*, "Zenject", "PrefabInstantiatorCached");
