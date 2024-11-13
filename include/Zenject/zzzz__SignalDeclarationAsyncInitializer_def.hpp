#pragma once
// IWYU pragma private; include "Zenject/SignalDeclarationAsyncInitializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SignalDeclarationAsyncInitializer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace Zenject {
class IInitializable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template <typename T> class LazyInject_1;
}
namespace Zenject {
class SignalDeclaration;
}
namespace Zenject {
class TickableManager;
}
// Forward declare root types
namespace Zenject {
class SignalDeclarationAsyncInitializer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalDeclarationAsyncInitializer);
// Type: Zenject::SignalDeclarationAsyncInitializer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::SignalDeclarationAsyncInitializer*
class CORDL_TYPE SignalDeclarationAsyncInitializer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _declarations, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__declarations, put = __cordl_internal_set__declarations)) ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* _declarations;

  /// @brief Field _tickManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tickManager, put = __cordl_internal_set__tickManager)) ::Zenject::LazyInject_1<::Zenject::TickableManager*>* _tickManager;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Initialize, addr 0x4a97fb4, size 0x104, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::Zenject::SignalDeclarationAsyncInitializer* New_ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* declarations,
                                                                       ::Zenject::LazyInject_1<::Zenject::TickableManager*>* tickManager);

  constexpr ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*& __cordl_internal_get__declarations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*> const& __cordl_internal_get__declarations() const;

  constexpr ::Zenject::LazyInject_1<::Zenject::TickableManager*>*& __cordl_internal_get__tickManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::LazyInject_1<::Zenject::TickableManager*>*> const& __cordl_internal_get__tickManager() const;

  constexpr void __cordl_internal_set__declarations(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* value);

  constexpr void __cordl_internal_set__tickManager(::Zenject::LazyInject_1<::Zenject::TickableManager*>* value);

  /// @brief Method __zenCreate, addr 0x4a980b8, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4a981d0, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4a97f88, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* declarations, ::Zenject::LazyInject_1<::Zenject::TickableManager*>* tickManager);

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalDeclarationAsyncInitializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationAsyncInitializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalDeclarationAsyncInitializer(SignalDeclarationAsyncInitializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationAsyncInitializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalDeclarationAsyncInitializer(SignalDeclarationAsyncInitializer const&) = delete;

  /// @brief Field _tickManager, offset: 0x10, size: 0x8, def value: None
  ::Zenject::LazyInject_1<::Zenject::TickableManager*>* ____tickManager;

  /// @brief Field _declarations, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* ____declarations;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11972 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalDeclarationAsyncInitializer, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::SignalDeclarationAsyncInitializer, ____tickManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalDeclarationAsyncInitializer, ____declarations) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalDeclarationAsyncInitializer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDeclarationAsyncInitializer*, "Zenject", "SignalDeclarationAsyncInitializer");
