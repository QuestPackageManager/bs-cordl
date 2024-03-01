#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Lazy_1)
namespace System::Threading {
struct LazyThreadSafetyMode;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class LazyHelper;
}
// Forward declare root types
namespace System {
template <typename T> class Lazy_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Lazy_1);
// Type: System::Lazy`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System::Lazy`1<T>*
class CORDL_TYPE Lazy_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsValueCreated)) bool IsValueCreated;

  __declspec(property(get = get_Value)) T Value;

  /// @brief Field _factory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__factory, put = __cordl_internal_set__factory))::System::Func_1<T>* _factory;

  /// @brief Field _state, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::System::LazyHelper* _state;

  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) T _value;

  /// @brief Method CreateValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T CreateValue();

  /// @brief Method CreateViaDefaultConstructor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T CreateViaDefaultConstructor();

  /// @brief Method ExecutionAndPublication, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ExecutionAndPublication(::System::LazyHelper* executionAndPublication, bool useDefaultConstructor);

  static inline ::System::Lazy_1<T>* New_ctor();

  static inline ::System::Lazy_1<T>* New_ctor(::System::Func_1<T>* valueFactory);

  static inline ::System::Lazy_1<T>* New_ctor(::System::Func_1<T>* valueFactory, ::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor);

  /// @brief Method PublicationOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PublicationOnly(::System::LazyHelper* publicationOnly, T possibleValue);

  /// @brief Method PublicationOnlyViaConstructor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PublicationOnlyViaConstructor(::System::LazyHelper* initializer);

  /// @brief Method PublicationOnlyViaFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PublicationOnlyViaFactory(::System::LazyHelper* initializer);

  /// @brief Method PublicationOnlyWaitForOtherThreadToPublish, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PublicationOnlyWaitForOtherThreadToPublish();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ViaConstructor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ViaConstructor();

  /// @brief Method ViaFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ViaFactory(::System::Threading::LazyThreadSafetyMode mode);

  constexpr ::System::Func_1<T>*& __cordl_internal_get__factory();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __cordl_internal_get__factory() const;

  constexpr ::System::LazyHelper*& __cordl_internal_get__state();

  constexpr ::cordl_internals::to_const_pointer<::System::LazyHelper*> const& __cordl_internal_get__state() const;

  constexpr T const& __cordl_internal_get__value() const;

  constexpr T& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__factory(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set__state(::System::LazyHelper* value);

  constexpr void __cordl_internal_set__value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<T>* valueFactory);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<T>* valueFactory, ::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor);

  /// @brief Method get_IsValueCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsValueCreated();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lazy_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Lazy_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lazy_1(Lazy_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lazy_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lazy_1(Lazy_1 const&) = delete;

  /// @brief Field _state, offset: 0x10, size: 0x8, def value: None
  ::System::LazyHelper* ____state;

  /// @brief Field _factory, offset: 0x18, size: 0x8, def value: None
  ::System::Func_1<T>* ____factory;

  /// @brief Field _value, offset: 0x20, size: 0x8, def value: None
  T ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Lazy_1, "System", "Lazy`1");
