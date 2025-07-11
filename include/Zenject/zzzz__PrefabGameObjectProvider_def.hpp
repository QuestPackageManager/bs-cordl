#pragma once
// IWYU pragma private; include "Zenject/PrefabGameObjectProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
CORDL_MODULE_EXPORT(PrefabGameObjectProvider)
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
class PrefabGameObjectProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabGameObjectProvider);
// Dependencies System.Object, Zenject.IProvider
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PrefabGameObjectProvider
class CORDL_TYPE PrefabGameObjectProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _prefabCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__prefabCreator, put = __cordl_internal_set__prefabCreator)) ::Zenject::IPrefabInstantiator* _prefabCreator;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x4b3d94c, size 0x14c, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x4b3d8e0, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::PrefabGameObjectProvider* New_ctor(::Zenject::IPrefabInstantiator* prefabCreator);

  constexpr ::Zenject::IPrefabInstantiator* const& __cordl_internal_get__prefabCreator() const;

  constexpr ::Zenject::IPrefabInstantiator*& __cordl_internal_get__prefabCreator();

  constexpr void __cordl_internal_set__prefabCreator(::Zenject::IPrefabInstantiator* value);

  /// @brief Method .ctor, addr 0x4b3d8a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IPrefabInstantiator* prefabCreator);

  /// @brief Method get_IsCached, addr 0x4b3d8d0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x4b3d8d8, size 0x8, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabGameObjectProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabGameObjectProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabGameObjectProvider(PrefabGameObjectProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabGameObjectProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabGameObjectProvider(PrefabGameObjectProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12534 };

  /// @brief Field _prefabCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IPrefabInstantiator* ____prefabCreator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PrefabGameObjectProvider, ____prefabCreator) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PrefabGameObjectProvider, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PrefabGameObjectProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabGameObjectProvider*, "Zenject", "PrefabGameObjectProvider");
