#pragma once
// IWYU pragma private; include "Zenject/CachedProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CachedProvider)
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
class CachedProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::CachedProvider);
// Dependencies System.Object, Zenject.IProvider
namespace Zenject {
// Is value type: false
// CS Name: Zenject.CachedProvider
class CORDL_TYPE CachedProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_NumInstances)) int32_t NumInstances;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _creator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__creator, put = __cordl_internal_set__creator)) ::Zenject::IProvider* _creator;

  /// @brief Field _instances, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__instances, put = __cordl_internal_set__instances)) ::System::Collections::Generic::List_1<::System::Object*>* _instances;

  /// @brief Field _isCreatingInstance, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isCreatingInstance, put = __cordl_internal_set__isCreatingInstance)) bool _isCreatingInstance;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method ClearCache, addr 0x4b481e8, size 0x8, virtual false, abstract: false, final false
  inline void ClearCache();

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x4b47c34, size 0x274, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x4b481f0, size 0xac, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::CachedProvider* New_ctor(::Zenject::IProvider* creator);

  constexpr ::Zenject::IProvider* const& __cordl_internal_get__creator() const;

  constexpr ::Zenject::IProvider*& __cordl_internal_get__creator();

  constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__instances() const;

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__instances();

  constexpr bool const& __cordl_internal_get__isCreatingInstance() const;

  constexpr bool& __cordl_internal_get__isCreatingInstance();

  constexpr void __cordl_internal_set__creator(::Zenject::IProvider* value);

  constexpr void __cordl_internal_set__instances(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__isCreatingInstance(bool value);

  /// @brief Method .ctor, addr 0x4b47c0c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IProvider* creator);

  /// @brief Method get_IsCached, addr 0x4b481b8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_NumInstances, addr 0x4b47f60, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_NumInstances();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x4b481c0, size 0x28, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CachedProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachedProvider(CachedProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachedProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachedProvider(CachedProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12521 };

  /// @brief Field _creator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IProvider* ____creator;

  /// @brief Field _instances, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ____instances;

  /// @brief Field _isCreatingInstance, offset: 0x20, size: 0x1, def value: None
  bool ____isCreatingInstance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::CachedProvider, ____creator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::CachedProvider, ____instances) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::CachedProvider, ____isCreatingInstance) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::CachedProvider, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::CachedProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::CachedProvider*, "Zenject", "CachedProvider");
