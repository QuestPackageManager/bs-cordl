#pragma once
// IWYU pragma private; include "System/Threading/ThreadLocal_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadLocal_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading {
template <typename T> class __ThreadLocal_1__FinalizationHelper;
}
namespace System::Threading {
template <typename T> class __ThreadLocal_1__IdManager;
}
namespace System::Threading {
template <typename T> struct __ThreadLocal_1__LinkedSlotVolatile;
}
namespace System::Threading {
template <typename T> class __ThreadLocal_1__LinkedSlot;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Threading {
template <typename T> class ThreadLocal_1;
}
namespace System::Threading {
template <typename T> class __ThreadLocal_1__FinalizationHelper;
}
namespace System::Threading {
template <typename T> class __ThreadLocal_1__IdManager;
}
namespace System::Threading {
template <typename T> class __ThreadLocal_1__LinkedSlot;
}
namespace System::Threading {
template <typename T> struct __ThreadLocal_1__LinkedSlotVolatile;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::ThreadLocal_1);
MARK_GEN_REF_PTR_T(::System::Threading::__ThreadLocal_1__FinalizationHelper);
MARK_GEN_REF_PTR_T(::System::Threading::__ThreadLocal_1__IdManager);
MARK_GEN_REF_PTR_T(::System::Threading::__ThreadLocal_1__LinkedSlot);
MARK_GEN_VAL_T(::System::Threading::__ThreadLocal_1__LinkedSlotVolatile);
// Type: ::LinkedSlotVolatile
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::ThreadLocal`1::LinkedSlotVolatile<T>
struct CORDL_TYPE __ThreadLocal_1__LinkedSlotVolatile {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreadLocal_1__LinkedSlotVolatile();

  // Ctor Parameters [CppParam { name: "Value", ty: "::System::Threading::__ThreadLocal_1__LinkedSlot<T>*", modifiers: "", def_value: None }]
  constexpr __ThreadLocal_1__LinkedSlotVolatile(::System::Threading::__ThreadLocal_1__LinkedSlot<T>* Value) noexcept;

  /// @brief Field Value, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* Value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2705 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Threading
// Type: ::LinkedSlot
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ThreadLocal`1::LinkedSlot<T>*
class CORDL_TYPE __ThreadLocal_1__LinkedSlot : public ::System::Object {
public:
  // Declarations
  /// @brief Field Next, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next)) ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* Next;

  /// @brief Field Previous, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Previous, put = __cordl_internal_set_Previous)) ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* Previous;

  /// @brief Field SlotArray, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_SlotArray,
                      put =
                          __cordl_internal_set_SlotArray)) ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>
      SlotArray;

  /// @brief Field Value, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Value, put = __cordl_internal_set_Value)) T Value;

  static inline ::System::Threading::__ThreadLocal_1__LinkedSlot<T>*
  New_ctor(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> slotArray);

  constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> const& __cordl_internal_get_Next() const;

  constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>*& __cordl_internal_get_Previous();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> const& __cordl_internal_get_Previous() const;

  constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> const& __cordl_internal_get_SlotArray() const;

  constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>& __cordl_internal_get_SlotArray();

  constexpr T const& __cordl_internal_get_Value() const;

  constexpr T& __cordl_internal_get_Value();

  constexpr void __cordl_internal_set_Next(::System::Threading::__ThreadLocal_1__LinkedSlot<T>* value);

  constexpr void __cordl_internal_set_Previous(::System::Threading::__ThreadLocal_1__LinkedSlot<T>* value);

  constexpr void __cordl_internal_set_SlotArray(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> value);

  constexpr void __cordl_internal_set_Value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> slotArray);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreadLocal_1__LinkedSlot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ThreadLocal_1__LinkedSlot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThreadLocal_1__LinkedSlot(__ThreadLocal_1__LinkedSlot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThreadLocal_1__LinkedSlot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThreadLocal_1__LinkedSlot(__ThreadLocal_1__LinkedSlot const&) = delete;

  /// @brief Field Next, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* ___Next;

  /// @brief Field Previous, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* ___Previous;

  /// @brief Field SlotArray, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> ___SlotArray;

  /// @brief Field Value, offset: 0x28, size: 0x8, def value: None
  T ___Value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2706 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
// Type: ::IdManager
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ThreadLocal`1::IdManager<T>*
class CORDL_TYPE __ThreadLocal_1__IdManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_freeIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_freeIds, put = __cordl_internal_set_m_freeIds)) ::System::Collections::Generic::List_1<bool>* m_freeIds;

  /// @brief Field m_nextIdToTry, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_nextIdToTry, put = __cordl_internal_set_m_nextIdToTry)) int32_t m_nextIdToTry;

  /// @brief Method GetId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetId();

  static inline ::System::Threading::__ThreadLocal_1__IdManager<T>* New_ctor();

  /// @brief Method ReturnId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReturnId(int32_t id);

  constexpr ::System::Collections::Generic::List_1<bool>*& __cordl_internal_get_m_freeIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<bool>*> const& __cordl_internal_get_m_freeIds() const;

  constexpr int32_t const& __cordl_internal_get_m_nextIdToTry() const;

  constexpr int32_t& __cordl_internal_get_m_nextIdToTry();

  constexpr void __cordl_internal_set_m_freeIds(::System::Collections::Generic::List_1<bool>* value);

  constexpr void __cordl_internal_set_m_nextIdToTry(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreadLocal_1__IdManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ThreadLocal_1__IdManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThreadLocal_1__IdManager(__ThreadLocal_1__IdManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThreadLocal_1__IdManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThreadLocal_1__IdManager(__ThreadLocal_1__IdManager const&) = delete;

  /// @brief Field m_nextIdToTry, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_nextIdToTry;

  /// @brief Field m_freeIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<bool>* ___m_freeIds;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2707 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
// Type: ::FinalizationHelper
// SizeInfo { instance_size: 32, native_size: 25, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::ThreadLocal`1::FinalizationHelper<T>*
class CORDL_TYPE __ThreadLocal_1__FinalizationHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field SlotArray, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_SlotArray,
                      put =
                          __cordl_internal_set_SlotArray)) ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>
      SlotArray;

  /// @brief Field m_trackAllValues, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_trackAllValues, put = __cordl_internal_set_m_trackAllValues)) bool m_trackAllValues;

  /// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*
  New_ctor(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> slotArray, bool trackAllValues);

  constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> const& __cordl_internal_get_SlotArray() const;

  constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>& __cordl_internal_get_SlotArray();

  constexpr bool const& __cordl_internal_get_m_trackAllValues() const;

  constexpr bool& __cordl_internal_get_m_trackAllValues();

  constexpr void __cordl_internal_set_SlotArray(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> value);

  constexpr void __cordl_internal_set_m_trackAllValues(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> slotArray, bool trackAllValues);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreadLocal_1__FinalizationHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ThreadLocal_1__FinalizationHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThreadLocal_1__FinalizationHelper(__ThreadLocal_1__FinalizationHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThreadLocal_1__FinalizationHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThreadLocal_1__FinalizationHelper(__ThreadLocal_1__FinalizationHelper const&) = delete;

  /// @brief Field SlotArray, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> ___SlotArray;

  /// @brief Field m_trackAllValues, offset: 0x18, size: 0x1, def value: None
  bool ___m_trackAllValues;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2708 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
// Type: System.Threading::ThreadLocal`1
// SizeInfo { instance_size: 48, native_size: 41, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Threading::ThreadLocal`1<T>*
class CORDL_TYPE ThreadLocal_1 : public ::System::Object {
public:
  // Declarations
  using FinalizationHelper = ::System::Threading::__ThreadLocal_1__FinalizationHelper<T>;

  using IdManager = ::System::Threading::__ThreadLocal_1__IdManager<T>;

  using LinkedSlot = ::System::Threading::__ThreadLocal_1__LinkedSlot<T>;

  using LinkedSlotVolatile = ::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>;

  __declspec(property(get = get_IsValueCreated)) bool IsValueCreated;

  __declspec(property(get = get_Value, put = set_Value)) T Value;

  /// @brief Field m_idComplement, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_idComplement, put = __cordl_internal_set_m_idComplement)) int32_t m_idComplement;

  /// @brief Field m_initialized, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_initialized, put = __cordl_internal_set_m_initialized)) bool m_initialized;

  /// @brief Field m_linkedSlot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_linkedSlot, put = __cordl_internal_set_m_linkedSlot)) ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* m_linkedSlot;

  /// @brief Field m_trackAllValues, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_trackAllValues, put = __cordl_internal_set_m_trackAllValues)) bool m_trackAllValues;

  /// @brief Field m_valueFactory, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_valueFactory, put = __cordl_internal_set_m_valueFactory)) ::System::Func_1<T>* m_valueFactory;

  /// @brief Field s_idManager, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_idManager, put = setStaticF_s_idManager)) ::System::Threading::__ThreadLocal_1__IdManager<T>* s_idManager;

  /// @brief Field ts_finalizationHelper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ts_finalizationHelper, put = setStaticF_ts_finalizationHelper)) ::System::Threading::__ThreadLocal_1__FinalizationHelper<T>* ts_finalizationHelper;

  /// @brief Field ts_slotArray, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF_ts_slotArray,
                          put = setStaticF_ts_slotArray)) ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>
          ts_slotArray;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateLinkedSlot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CreateLinkedSlot(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> slotArray, int32_t id,
                               T value);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetNewTableSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t GetNewTableSize(int32_t minSize);

  /// @brief Method GetValueSlow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValueSlow();

  /// @brief Method GrowTable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void GrowTable(ByRef<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>> table, int32_t minLength);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Initialize(::System::Func_1<T>* valueFactory, bool trackAllValues);

  static inline ::System::Threading::ThreadLocal_1<T>* New_ctor();

  /// @brief Method SetValueSlow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetValueSlow(T value, ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> slotArray);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_m_idComplement() const;

  constexpr int32_t& __cordl_internal_get_m_idComplement();

  constexpr bool const& __cordl_internal_get_m_initialized() const;

  constexpr bool& __cordl_internal_get_m_initialized();

  constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>*& __cordl_internal_get_m_linkedSlot();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> const& __cordl_internal_get_m_linkedSlot() const;

  constexpr bool const& __cordl_internal_get_m_trackAllValues() const;

  constexpr bool& __cordl_internal_get_m_trackAllValues();

  constexpr ::System::Func_1<T>*& __cordl_internal_get_m_valueFactory();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __cordl_internal_get_m_valueFactory() const;

  constexpr void __cordl_internal_set_m_idComplement(int32_t value);

  constexpr void __cordl_internal_set_m_initialized(bool value);

  constexpr void __cordl_internal_set_m_linkedSlot(::System::Threading::__ThreadLocal_1__LinkedSlot<T>* value);

  constexpr void __cordl_internal_set_m_trackAllValues(bool value);

  constexpr void __cordl_internal_set_m_valueFactory(::System::Func_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::__ThreadLocal_1__IdManager<T>* getStaticF_s_idManager();

  static inline ::System::Threading::__ThreadLocal_1__FinalizationHelper<T>* getStaticF_ts_finalizationHelper();

  static inline ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> getStaticF_ts_slotArray();

  /// @brief Method get_IsValueCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsValueCreated();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_idManager(::System::Threading::__ThreadLocal_1__IdManager<T>* value);

  static inline void setStaticF_ts_finalizationHelper(::System::Threading::__ThreadLocal_1__FinalizationHelper<T>* value);

  static inline void setStaticF_ts_slotArray(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>, ::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> value);

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Value(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadLocal_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadLocal_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadLocal_1(ThreadLocal_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadLocal_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadLocal_1(ThreadLocal_1 const&) = delete;

  /// @brief Field m_valueFactory, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___m_valueFactory;

  /// @brief Field m_idComplement, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_idComplement;

  /// @brief Field m_initialized, offset: 0x1c, size: 0x1, def value: None
  bool ___m_initialized;

  /// @brief Field m_linkedSlot, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* ___m_linkedSlot;

  /// @brief Field m_trackAllValues, offset: 0x28, size: 0x1, def value: None
  bool ___m_trackAllValues;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2709 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::ThreadLocal_1, "System.Threading", "ThreadLocal`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::__ThreadLocal_1__FinalizationHelper, "System.Threading", "ThreadLocal`1/FinalizationHelper");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::__ThreadLocal_1__IdManager, "System.Threading", "ThreadLocal`1/IdManager");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::__ThreadLocal_1__LinkedSlot, "System.Threading", "ThreadLocal`1/LinkedSlot");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::__ThreadLocal_1__LinkedSlotVolatile, "System.Threading", "ThreadLocal`1/LinkedSlotVolatile");
