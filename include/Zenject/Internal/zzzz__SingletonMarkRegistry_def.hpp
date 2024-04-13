#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SingletonMarkRegistry)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject::Internal {
class SingletonMarkRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::SingletonMarkRegistry);
// Type: Zenject.Internal::SingletonMarkRegistry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// CS Name: ::Zenject.Internal::SingletonMarkRegistry*
class CORDL_TYPE SingletonMarkRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field _boundNonSingletons, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__boundNonSingletons, put = __cordl_internal_set__boundNonSingletons))::System::Collections::Generic::HashSet_1<::System::Type*>* _boundNonSingletons;

  /// @brief Field _boundSingletons, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__boundSingletons, put = __cordl_internal_set__boundSingletons))::System::Collections::Generic::HashSet_1<::System::Type*>* _boundSingletons;

  /// @brief Method MarkNonSingleton, addr 0x3470520, size 0xac, virtual false, abstract: false, final false
  inline void MarkNonSingleton(::System::Type* type);

  /// @brief Method MarkSingleton, addr 0x34705cc, size 0xd4, virtual false, abstract: false, final false
  inline void MarkSingleton(::System::Type* type);

  static inline ::Zenject::Internal::SingletonMarkRegistry* New_ctor();

  /// @brief Method Unmark, addr 0x34706a0, size 0x6c, virtual false, abstract: false, final false
  inline void Unmark(::System::Type* type);

  constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& __cordl_internal_get__boundNonSingletons();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Type*>*> const& __cordl_internal_get__boundNonSingletons() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& __cordl_internal_get__boundSingletons();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Type*>*> const& __cordl_internal_get__boundSingletons() const;

  constexpr void __cordl_internal_set__boundNonSingletons(::System::Collections::Generic::HashSet_1<::System::Type*>* value);

  constexpr void __cordl_internal_set__boundSingletons(::System::Collections::Generic::HashSet_1<::System::Type*>* value);

  /// @brief Method .ctor, addr 0x347070c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingletonMarkRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SingletonMarkRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingletonMarkRegistry(SingletonMarkRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingletonMarkRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingletonMarkRegistry(SingletonMarkRegistry const&) = delete;

  /// @brief Field _boundSingletons, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Type*>* ____boundSingletons;

  /// @brief Field _boundNonSingletons, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Type*>* ____boundNonSingletons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::SingletonMarkRegistry, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::Internal::SingletonMarkRegistry, ____boundSingletons) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::SingletonMarkRegistry, ____boundNonSingletons) == 0x18, "Offset mismatch!");

} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::SingletonMarkRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::SingletonMarkRegistry*, "Zenject.Internal", "SingletonMarkRegistry");
