#pragma once
// IWYU pragma private; include "System/Buffers/TlsOverPerCoreLockedStacksArrayPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Buffers/zzzz__ArrayPool_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TlsOverPerCoreLockedStacksArrayPool_1)
namespace System::Buffers {
template <typename T> class __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack;
}
namespace System::Buffers {
template <typename T> struct __TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure;
}
namespace System::Buffers {
template <typename T> class __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Buffers {
template <typename T> struct __TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure;
}
namespace System::Buffers {
template <typename T> class TlsOverPerCoreLockedStacksArrayPool_1;
}
namespace System::Buffers {
template <typename T> class __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack;
}
namespace System::Buffers {
template <typename T> class __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks;
}
// Write type traits
MARK_GEN_VAL_T(::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure);
MARK_GEN_REF_PTR_T(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1);
MARK_GEN_REF_PTR_T(::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack);
MARK_GEN_REF_PTR_T(::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks);
// Type: ::MemoryPressure
// SizeInfo { instance_size: 4, native_size: 20, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Buffers {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::TlsOverPerCoreLockedStacksArrayPool`1::MemoryPressure<T>
struct CORDL_TYPE __TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure_Unwrapped
  enum struct ____TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_High = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure_Unwrapped() const noexcept {
    return static_cast<____TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field High value: static_cast<int32_t>(0x2)
  static ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> const High;

  /// @brief Field Low value: static_cast<int32_t>(0x0)
  static ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x1)
  static ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> const Medium;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Buffers
// Type: ::PerCoreLockedStacks
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Buffers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::TlsOverPerCoreLockedStacksArrayPool`1::PerCoreLockedStacks<T>*
class CORDL_TYPE __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks : public ::System::Object {
public:
  // Declarations
  /// @brief Field _perCoreStacks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__perCoreStacks,
                      put = __cordl_internal_set__perCoreStacks))::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*,
                                                                          ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*> _perCoreStacks;

  static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>* New_ctor();

  /// @brief Method Trim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Trim(uint32_t tickCount, int32_t id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> pressure, ::ArrayW<int32_t, ::Array<int32_t>*> bucketSizes);

  /// @brief Method TryPop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> TryPop();

  /// @brief Method TryPush, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void TryPush(::ArrayW<T, ::Array<T>*> array);

  constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*, ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*> const&
  __cordl_internal_get__perCoreStacks() const;

  constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*, ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*>&
  __cordl_internal_get__perCoreStacks();

  constexpr void __cordl_internal_set__perCoreStacks(
      ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*, ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const&) = delete;

  /// @brief Field _perCoreStacks, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*, ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>*>*> ____perCoreStacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
// Type: ::LockedStack
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Buffers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::TlsOverPerCoreLockedStacksArrayPool`1::LockedStack<T>*
class CORDL_TYPE __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack : public ::System::Object {
public:
  // Declarations
  /// @brief Field _arrays, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__arrays, put = __cordl_internal_set__arrays))::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> _arrays;

  /// @brief Field _count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _firstStackItemMS, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__firstStackItemMS, put = __cordl_internal_set__firstStackItemMS)) uint32_t _firstStackItemMS;

  static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>* New_ctor();

  /// @brief Method Trim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Trim(uint32_t tickCount, int32_t id, ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> pressure, int32_t bucketSize);

  /// @brief Method TryPop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> TryPop();

  /// @brief Method TryPush, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryPush(::ArrayW<T, ::Array<T>*> array);

  constexpr ::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> const& __cordl_internal_get__arrays() const;

  constexpr ::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>& __cordl_internal_get__arrays();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr uint32_t const& __cordl_internal_get__firstStackItemMS() const;

  constexpr uint32_t& __cordl_internal_get__firstStackItemMS();

  constexpr void __cordl_internal_set__arrays(::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> value);

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__firstStackItemMS(uint32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const&) = delete;

  /// @brief Field _arrays, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> ____arrays;

  /// @brief Field _count, offset: 0x18, size: 0x4, def value: None
  int32_t ____count;

  /// @brief Field _firstStackItemMS, offset: 0x1c, size: 0x4, def value: None
  uint32_t ____firstStackItemMS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
// Type: System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1
// SizeInfo { instance_size: 40, native_size: 36, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Buffers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1<T>*
class CORDL_TYPE TlsOverPerCoreLockedStacksArrayPool_1 : public ::System::Buffers::ArrayPool_1<T> {
public:
  // Declarations
  using LockedStack = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>;

  using MemoryPressure = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>;

  using PerCoreLockedStacks = ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>;

  __declspec(property(get = get_Id)) int32_t Id;

  /// @brief Field _bucketArraySizes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bucketArraySizes, put = __cordl_internal_set__bucketArraySizes))::ArrayW<int32_t, ::Array<int32_t>*> _bucketArraySizes;

  /// @brief Field _buckets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__buckets,
                      put = __cordl_internal_set__buckets))::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,
                                                                    ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*> _buckets;

  /// @brief Field _callbackCreated, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__callbackCreated, put = __cordl_internal_set__callbackCreated)) int32_t _callbackCreated;

  /// @brief Field s_allTlsBuckets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_allTlsBuckets,
                             put = setStaticF_s_allTlsBuckets))::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>,
                                                                                                                           ::System::Object*>* s_allTlsBuckets;

  /// @brief Field s_trimBuffers, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_trimBuffers, put = setStaticF_s_trimBuffers)) bool s_trimBuffers;

  /// @brief Field t_tlsBuckets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_t_tlsBuckets, put = setStaticF_t_tlsBuckets))::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> t_tlsBuckets;

  /// @brief Method CreatePerCoreLockedStacks, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>* CreatePerCoreLockedStacks(int32_t bucketIndex);

  /// @brief Method Gen2GcCallbackFunc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool Gen2GcCallbackFunc(::System::Object* target);

  /// @brief Method GetMemoryPressure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> GetMemoryPressure();

  /// @brief Method GetTrimBuffers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool GetTrimBuffers();

  static inline ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1<T>* New_ctor();

  /// @brief Method Rent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> Rent(int32_t minimumLength);

  /// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Return(::ArrayW<T, ::Array<T>*> array, bool clearArray);

  /// @brief Method Trim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Trim();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__bucketArraySizes() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__bucketArraySizes();

  constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,
                     ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*> const&
  __cordl_internal_get__buckets() const;

  constexpr ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*,
                     ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>&
  __cordl_internal_get__buckets();

  constexpr int32_t const& __cordl_internal_get__callbackCreated() const;

  constexpr int32_t& __cordl_internal_get__callbackCreated();

  constexpr void __cordl_internal_set__bucketArraySizes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__buckets(
      ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*, ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>
          value);

  constexpr void __cordl_internal_set__callbackCreated(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>, ::System::Object*>* getStaticF_s_allTlsBuckets();

  static inline bool getStaticF_s_trimBuffers();

  static inline ::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> getStaticF_t_tlsBuckets();

  /// @brief Method get_Id, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Id();

  static inline void
  setStaticF_s_allTlsBuckets(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*>, ::System::Object*>* value);

  static inline void setStaticF_s_trimBuffers(bool value);

  static inline void setStaticF_t_tlsBuckets(::ArrayW<::ArrayW<T, ::Array<T>*>, ::Array<::ArrayW<T, ::Array<T>*>>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsOverPerCoreLockedStacksArrayPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 const&) = delete;

  /// @brief Field _bucketArraySizes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____bucketArraySizes;

  /// @brief Field _buckets, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*, ::Array<::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>*>*>
      ____buckets;

  /// @brief Field _callbackCreated, offset: 0x20, size: 0x4, def value: None
  int32_t ____callbackCreated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1/LockedStack");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1/PerCoreLockedStacks");
