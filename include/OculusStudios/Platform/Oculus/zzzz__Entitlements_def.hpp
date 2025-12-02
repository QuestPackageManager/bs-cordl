#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/Entitlements.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/Platform/Core/zzzz__Vendor_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Entitlements)
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
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
class PlatformInitParams;
}
namespace OculusStudios::Platform::Core {
class Product;
}
namespace OculusStudios::Platform::Oculus {
struct Entitlements__GetAllProductsAsync_d__5;
}
namespace OculusStudios::Platform::Oculus {
class Entitlements___c;
}
namespace OculusStudios::Platform::Oculus {
class Entitlements___c__DisplayClass5_0;
}
namespace OculusStudios::Platform::Oculus {
class Entitlements___c__DisplayClass5_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
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
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace OculusStudios::Platform::Oculus {
class Entitlements;
}
namespace OculusStudios::Platform::Oculus {
class Entitlements___c;
}
namespace OculusStudios::Platform::Oculus {
class Entitlements___c__DisplayClass5_0;
}
namespace OculusStudios::Platform::Oculus {
class Entitlements___c__DisplayClass5_1;
}
namespace OculusStudios::Platform::Oculus {
struct Entitlements__GetAllProductsAsync_d__5;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Oculus::Entitlements);
MARK_REF_PTR_T(::OculusStudios::Platform::Oculus::Entitlements___c);
MARK_REF_PTR_T(::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0);
MARK_REF_PTR_T(::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1);
MARK_VAL_T(::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5);
// Dependencies System.Object
namespace OculusStudios::Platform::Oculus {
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.Entitlements/<>c
class CORDL_TYPE Entitlements___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::OculusStudios::Platform::Oculus::Entitlements___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::Oculus::Platform::Models::Purchase*, ::StringW>* __9__5_0;

  /// @brief Field <>9__5_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_1, put = setStaticF___9__5_1)) ::System::Func_2<::OculusStudios::Platform::Core::Product*, ::StringW>* __9__5_1;

  static inline ::OculusStudios::Platform::Oculus::Entitlements___c* New_ctor();

  /// @brief Method <GetAllProductsAsync>b__5_0, addr 0x5d1c050, size 0x14, virtual false, abstract: false, final false
  inline ::StringW _GetAllProductsAsync_b__5_0(::Oculus::Platform::Models::Purchase* x);

  /// @brief Method <GetAllProductsAsync>b__5_1, addr 0x5d1c064, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _GetAllProductsAsync_b__5_1(::OculusStudios::Platform::Core::Product* product);

  /// @brief Method .ctor, addr 0x5d1c04c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::OculusStudios::Platform::Oculus::Entitlements___c* getStaticF___9();

  static inline ::System::Func_2<::Oculus::Platform::Models::Purchase*, ::StringW>* getStaticF___9__5_0();

  static inline ::System::Func_2<::OculusStudios::Platform::Core::Product*, ::StringW>* getStaticF___9__5_1();

  static inline void setStaticF___9(::OculusStudios::Platform::Oculus::Entitlements___c* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::Oculus::Platform::Models::Purchase*, ::StringW>* value);

  static inline void setStaticF___9__5_1(::System::Func_2<::OculusStudios::Platform::Core::Product*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Entitlements___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Entitlements___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Entitlements___c(Entitlements___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Entitlements___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Entitlements___c(Entitlements___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21876 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::Entitlements___c, 0x10>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// Dependencies System.Object
namespace OculusStudios::Platform::Oculus {
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.Entitlements/<>c__DisplayClass5_0
class CORDL_TYPE Entitlements___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__3, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__3,
                      put = __cordl_internal_set___9__3)) ::System::Func_2<::OculusStudios::Platform::Core::IProductDefinition*, ::OculusStudios::Platform::Core::Product*>* __9__3;

  /// @brief Field productMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_productMap,
                      put = __cordl_internal_set_productMap)) ::System::Collections::Generic::Dictionary_2<::StringW, ::OculusStudios::Platform::Core::Product*>* productMap;

  static inline ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0* New_ctor();

  /// @brief Method <GetAllProductsAsync>b__3, addr 0x5d1c080, size 0xdc, virtual false, abstract: false, final false
  inline ::OculusStudios::Platform::Core::Product* _GetAllProductsAsync_b__3(::OculusStudios::Platform::Core::IProductDefinition* definition);

  constexpr ::System::Func_2<::OculusStudios::Platform::Core::IProductDefinition*, ::OculusStudios::Platform::Core::Product*>* const& __cordl_internal_get___9__3() const;

  constexpr ::System::Func_2<::OculusStudios::Platform::Core::IProductDefinition*, ::OculusStudios::Platform::Core::Product*>*& __cordl_internal_get___9__3();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::OculusStudios::Platform::Core::Product*>* const& __cordl_internal_get_productMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::OculusStudios::Platform::Core::Product*>*& __cordl_internal_get_productMap();

  constexpr void __cordl_internal_set___9__3(::System::Func_2<::OculusStudios::Platform::Core::IProductDefinition*, ::OculusStudios::Platform::Core::Product*>* value);

  constexpr void __cordl_internal_set_productMap(::System::Collections::Generic::Dictionary_2<::StringW, ::OculusStudios::Platform::Core::Product*>* value);

  /// @brief Method .ctor, addr 0x5d1c07c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Entitlements___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Entitlements___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Entitlements___c__DisplayClass5_0(Entitlements___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Entitlements___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Entitlements___c__DisplayClass5_0(Entitlements___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21877 };

  /// @brief Field productMap, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::OculusStudios::Platform::Core::Product*>* ___productMap;

  /// @brief Field <>9__3, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::OculusStudios::Platform::Core::IProductDefinition*, ::OculusStudios::Platform::Core::Product*>* _____9__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0, ___productMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0, _____9__3) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0, 0x20>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// Dependencies System.Object
namespace OculusStudios::Platform::Oculus {
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.Entitlements/<>c__DisplayClass5_1
class CORDL_TYPE Entitlements___c__DisplayClass5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field vendorProductId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_vendorProductId, put = __cordl_internal_set_vendorProductId)) ::StringW vendorProductId;

  static inline ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1* New_ctor();

  /// @brief Method <GetAllProductsAsync>b__2, addr 0x5d1c160, size 0x60, virtual false, abstract: false, final false
  inline bool _GetAllProductsAsync_b__2(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Oculus::Platform::Models::Purchase*> x);

  constexpr ::StringW const& __cordl_internal_get_vendorProductId() const;

  constexpr ::StringW& __cordl_internal_get_vendorProductId();

  constexpr void __cordl_internal_set_vendorProductId(::StringW value);

  /// @brief Method .ctor, addr 0x5d1c15c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Entitlements___c__DisplayClass5_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Entitlements___c__DisplayClass5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Entitlements___c__DisplayClass5_1(Entitlements___c__DisplayClass5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Entitlements___c__DisplayClass5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Entitlements___c__DisplayClass5_1(Entitlements___c__DisplayClass5_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21878 };

  /// @brief Field vendorProductId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___vendorProductId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1, ___vendorProductId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1, 0x18>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::Platform::Oculus {
// Is value type: true
// CS Name: OculusStudios.Platform.Oculus.Entitlements/<GetAllProductsAsync>d__5
struct CORDL_TYPE Entitlements__GetAllProductsAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d1c1c0, size 0xfd8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d1d23c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Entitlements__GetAllProductsAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::OculusStudios::Platform::Oculus::Entitlements*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*>", modifiers: "", def_value: None }]
  constexpr Entitlements__GetAllProductsAsync_d__5(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*> __t__builder,
      ::OculusStudios::Platform::Oculus::Entitlements* __4__this, ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0* __8__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21879 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Oculus::Entitlements* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5, 0x38>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// Dependencies OculusStudios.Platform.Core.Vendor, System.Object
namespace OculusStudios::Platform::Oculus {
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.Entitlements
class CORDL_TYPE Entitlements : public ::System::Object {
public:
  // Declarations
  using _GetAllProductsAsync_d__5 = ::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5;

  using __c = ::OculusStudios::Platform::Oculus::Entitlements___c;

  using __c__DisplayClass5_0 = ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0;

  using __c__DisplayClass5_1 = ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1;

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

  /// @brief Method GetAllProductsAsync, addr 0x5d1bea0, size 0xe0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>* GetAllProductsAsync();

  static inline ::OculusStudios::Platform::Oculus::Entitlements* New_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  /// @brief Method RegisterNewProducts, addr 0x5d1bf80, size 0x78, virtual true, abstract: false, final true
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

  /// @brief Method .ctor, addr 0x5d1bde0, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  /// @brief Convert to "::OculusStudios::Platform::Core::IPlatformEntitlements"
  constexpr ::OculusStudios::Platform::Core::IPlatformEntitlements* i___OculusStudios__Platform__Core__IPlatformEntitlements() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Entitlements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Entitlements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Entitlements(Entitlements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Entitlements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Entitlements(Entitlements const&) = delete;

  /// @brief Field VENDOR value: U8(2)
  static ::OculusStudios::Platform::Core::Vendor const VENDOR;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21880 };

  /// @brief Field logger, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatformLogger* ___logger;

  /// @brief Field productDefinitions, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::IProductDefinition*>* ___productDefinitions;

  /// @brief Field productInstances, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* ___productInstances;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::Entitlements, ___logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::Entitlements, ___productDefinitions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::Entitlements, ___productInstances) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::Entitlements, 0x28>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
NEED_NO_BOX(::OculusStudios::Platform::Oculus::Entitlements);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::Entitlements*, "OculusStudios.Platform.Oculus", "Entitlements");
NEED_NO_BOX(::OculusStudios::Platform::Oculus::Entitlements___c);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::Entitlements___c*, "OculusStudios.Platform.Oculus", "Entitlements/<>c");
NEED_NO_BOX(::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0*, "OculusStudios.Platform.Oculus", "Entitlements/<>c__DisplayClass5_0");
NEED_NO_BOX(::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1*, "OculusStudios.Platform.Oculus", "Entitlements/<>c__DisplayClass5_1");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5, "OculusStudios.Platform.Oculus", "Entitlements/<GetAllProductsAsync>d__5");
