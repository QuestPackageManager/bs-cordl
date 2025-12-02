#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/MockedEntitlements.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/Platform/Core/zzzz__Vendor_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockedEntitlements)
namespace OculusStudios::Platform::Core {
class IPlatformEntitlements;
}
namespace OculusStudios::Platform::Core {
class IPlatformLogger;
}
namespace OculusStudios::Platform::Core {
class IProductDefinition;
}
namespace OculusStudios::Platform::Core {
struct MockedEntitlements__GetAllProductsAsync_d__5;
}
namespace OculusStudios::Platform::Core {
class MockedEntitlements___c__DisplayClass5_0;
}
namespace OculusStudios::Platform::Core {
class PlatformInitParams;
}
namespace OculusStudios::Platform::Core {
class Product;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class MockedEntitlements;
}
namespace OculusStudios::Platform::Core {
class MockedEntitlements___c__DisplayClass5_0;
}
namespace OculusStudios::Platform::Core {
struct MockedEntitlements__GetAllProductsAsync_d__5;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::MockedEntitlements);
MARK_REF_PTR_T(::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0);
MARK_VAL_T(::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5);
// Dependencies System.Object
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.MockedEntitlements/<>c__DisplayClass5_0
class CORDL_TYPE MockedEntitlements___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field child, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_child, put = __cordl_internal_set_child)) ::OculusStudios::Platform::Core::IProductDefinition* child;

  static inline ::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0* New_ctor();

  /// @brief Method <GetAllProductsAsync>b__0, addr 0x5d19fc8, size 0xcc, virtual false, abstract: false, final false
  inline bool _GetAllProductsAsync_b__0(::OculusStudios::Platform::Core::Product* x);

  constexpr ::OculusStudios::Platform::Core::IProductDefinition* const& __cordl_internal_get_child() const;

  constexpr ::OculusStudios::Platform::Core::IProductDefinition*& __cordl_internal_get_child();

  constexpr void __cordl_internal_set_child(::OculusStudios::Platform::Core::IProductDefinition* value);

  /// @brief Method .ctor, addr 0x5d19fc4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockedEntitlements___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockedEntitlements___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockedEntitlements___c__DisplayClass5_0(MockedEntitlements___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockedEntitlements___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockedEntitlements___c__DisplayClass5_0(MockedEntitlements___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22170 };

  /// @brief Field child, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IProductDefinition* ___child;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0, ___child) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0, 0x18>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>
namespace OculusStudios::Platform::Core {
// Is value type: true
// CS Name: OculusStudios.Platform.Core.MockedEntitlements/<GetAllProductsAsync>d__5
struct CORDL_TYPE MockedEntitlements__GetAllProductsAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d1a094, size 0x1044, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d1b0d8, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockedEntitlements__GetAllProductsAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::OculusStudios::Platform::Core::MockedEntitlements*", modifiers: "", def_value: None }]
  constexpr MockedEntitlements__GetAllProductsAsync_d__5(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*> __t__builder,
      ::OculusStudios::Platform::Core::MockedEntitlements* __4__this) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22171 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::MockedEntitlements* __4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5, 0x28>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
// Dependencies OculusStudios.Platform.Core.Vendor, System.Object
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.MockedEntitlements
class CORDL_TYPE MockedEntitlements : public ::System::Object {
public:
  // Declarations
  using _GetAllProductsAsync_d__5 = ::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5;

  using __c__DisplayClass5_0 = ::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0;

  /// @brief Field logger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger)) ::OculusStudios::Platform::Core::IPlatformLogger* logger;

  /// @brief Field productDefinitions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_productDefinitions,
                      put = __cordl_internal_set_productDefinitions)) ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::IProductDefinition*>* productDefinitions;

  /// @brief Field productInstances, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_productInstances,
                      put = __cordl_internal_set_productInstances)) ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* productInstances;

  /// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformEntitlements"
  constexpr operator ::OculusStudios::Platform::Core::IPlatformEntitlements*() noexcept;

  /// @brief Method GetAllProductsAsync, addr 0x5d19e78, size 0xd4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>* GetAllProductsAsync();

  static inline ::OculusStudios::Platform::Core::MockedEntitlements* New_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  /// @brief Method RegisterNewProducts, addr 0x5d19f4c, size 0x78, virtual true, abstract: false, final true
  inline void RegisterNewProducts(::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>* productDefinitions);

  constexpr ::OculusStudios::Platform::Core::IPlatformLogger* const& __cordl_internal_get_logger() const;

  constexpr ::OculusStudios::Platform::Core::IPlatformLogger*& __cordl_internal_get_logger();

  constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::IProductDefinition*>* const& __cordl_internal_get_productDefinitions() const;

  constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::IProductDefinition*>*& __cordl_internal_get_productDefinitions();

  constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* const& __cordl_internal_get_productInstances() const;

  constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>*& __cordl_internal_get_productInstances();

  constexpr void __cordl_internal_set_logger(::OculusStudios::Platform::Core::IPlatformLogger* value);

  constexpr void __cordl_internal_set_productDefinitions(::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::IProductDefinition*>* value);

  constexpr void __cordl_internal_set_productInstances(::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* value);

  /// @brief Method .ctor, addr 0x5d19db8, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  /// @brief Convert to "::OculusStudios::Platform::Core::IPlatformEntitlements"
  constexpr ::OculusStudios::Platform::Core::IPlatformEntitlements* i___OculusStudios__Platform__Core__IPlatformEntitlements() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockedEntitlements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockedEntitlements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockedEntitlements(MockedEntitlements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockedEntitlements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockedEntitlements(MockedEntitlements const&) = delete;

  /// @brief Field VENDOR value: U8(2)
  static ::OculusStudios::Platform::Core::Vendor const VENDOR;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22172 };

  /// @brief Field logger, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatformLogger* ___logger;

  /// @brief Field productDefinitions, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::IProductDefinition*>* ___productDefinitions;

  /// @brief Field productInstances, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* ___productInstances;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::MockedEntitlements, ___logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::MockedEntitlements, ___productDefinitions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::MockedEntitlements, ___productInstances) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::MockedEntitlements, 0x28>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::MockedEntitlements);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::MockedEntitlements*, "OculusStudios.Platform.Core", "MockedEntitlements");
NEED_NO_BOX(::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0*, "OculusStudios.Platform.Core", "MockedEntitlements/<>c__DisplayClass5_0");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5, "OculusStudios.Platform.Core", "MockedEntitlements/<GetAllProductsAsync>d__5");
