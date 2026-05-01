#pragma once
// IWYU pragma private; include "System/Threading/ThreadLocal_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadLocal_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading {
template <typename T> class ThreadLocal_1_FinalizationHelper;
}
namespace System::Threading {
template <typename T> class ThreadLocal_1_IdManager;
}
namespace System::Threading {
template <typename T> struct ThreadLocal_1_LinkedSlotVolatile;
}
namespace System::Threading {
template <typename T> class ThreadLocal_1_LinkedSlot;
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
template <typename T> class ThreadLocal_1_FinalizationHelper;
}
namespace System::Threading {
template <typename T> class ThreadLocal_1_IdManager;
}
namespace System::Threading {
template <typename T> class ThreadLocal_1_LinkedSlot;
}
namespace System::Threading {
template <typename T> struct ThreadLocal_1_LinkedSlotVolatile;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::ThreadLocal_1);
MARK_GEN_REF_PTR_T(::System::Threading::ThreadLocal_1_FinalizationHelper);
MARK_GEN_REF_PTR_T(::System::Threading::ThreadLocal_1_IdManager);
MARK_GEN_REF_PTR_T(::System::Threading::ThreadLocal_1_LinkedSlot);
MARK_GEN_VAL_T(::System::Threading::ThreadLocal_1_LinkedSlotVolatile);
// Dependencies
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Threading.ThreadLocal`1/LinkedSlotVolatile<T>
struct CORDL_TYPE ThreadLocal_1_LinkedSlotVolatile {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadLocal_1_LinkedSlotVolatile();

  // Ctor Parameters [CppParam { name: "Value", ty: "::System::Threading::ThreadLocal_1_LinkedSlot<T>*", modifiers: "", def_value: None }]
  constexpr ThreadLocal_1_LinkedSlotVolatile(::System::Threading::ThreadLocal_1_LinkedSlot<T>* Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2714 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Value, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::ThreadLocal_1_LinkedSlot<T>* Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Threading
// Dependencies System.Object
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Threading.ThreadLocal`1/LinkedSlot<T>
class CORDL_TYPE ThreadLocal_1_LinkedSlot : public ::System::Object {
public:
  // Declarations
  /// @brief Field Next, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next)) ::System::Threading::ThreadLocal_1_LinkedSlot<T>* Next;

  /// @brief Field Previous, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Previous, put = __cordl_internal_set_Previous)) ::System::Threading::ThreadLocal_1_LinkedSlot<T>* Previous;

  /// @brief Field SlotArray, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_SlotArray,
                      put = __cordl_internal_set_SlotArray)) ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*>
      SlotArray;

  /// @brief Field Value, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Value, put = __cordl_internal_set_Value)) T Value;

  static inline ::System::Threading::ThreadLocal_1_LinkedSlot<T>*
  New_ctor(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> slotArray);

  constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>* const& __cordl_internal_get_Next() const;

  constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>*& __cordl_internal_get_Next();

  constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>* const& __cordl_internal_get_Previous() const;

  constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>*& __cordl_internal_get_Previous();

  constexpr ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> const& __cordl_internal_get_SlotArray() const;

  constexpr ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*>& __cordl_internal_get_SlotArray();

  constexpr T const& __cordl_internal_get_Value() const;

  constexpr T& __cordl_internal_get_Value();

  constexpr void __cordl_internal_set_Next(::System::Threading::ThreadLocal_1_LinkedSlot<T>* value);

  constexpr void __cordl_internal_set_Previous(::System::Threading::ThreadLocal_1_LinkedSlot<T>* value);

  constexpr void __cordl_internal_set_SlotArray(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> value);

  constexpr void __cordl_internal_set_Value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> slotArray);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadLocal_1_LinkedSlot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadLocal_1_LinkedSlot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadLocal_1_LinkedSlot(ThreadLocal_1_LinkedSlot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadLocal_1_LinkedSlot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadLocal_1_LinkedSlot(ThreadLocal_1_LinkedSlot const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2715 };

  /// @brief Field Next, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::ThreadLocal_1_LinkedSlot<T>* ___Next;

  /// @brief Field Previous, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::ThreadLocal_1_LinkedSlot<T>* ___Previous;

  /// @brief Field SlotArray, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> ___SlotArray;

  /// @brief Field Value, offset: 0x28, size: 0x8, def value: None
  T ___Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
// Dependencies System.Object
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Threading.ThreadLocal`1/IdManager<T>
class CORDL_TYPE ThreadLocal_1_IdManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_freeIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_freeIds, put = __cordl_internal_set_m_freeIds)) ::System::Collections::Generic::List_1<bool>* m_freeIds;

  /// @brief Field m_nextIdToTry, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_nextIdToTry, put = __cordl_internal_set_m_nextIdToTry)) int32_t m_nextIdToTry;

  /// @brief Method GetId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetId();

  static inline ::System::Threading::ThreadLocal_1_IdManager<T>* New_ctor();

  /// @brief Method ReturnId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReturnId(int32_t id);

  constexpr ::System::Collections::Generic::List_1<bool>* const& __cordl_internal_get_m_freeIds() const;

  constexpr ::System::Collections::Generic::List_1<bool>*& __cordl_internal_get_m_freeIds();

  constexpr int32_t const& __cordl_internal_get_m_nextIdToTry() const;

  constexpr int32_t& __cordl_internal_get_m_nextIdToTry();

  constexpr void __cordl_internal_set_m_freeIds(::System::Collections::Generic::List_1<bool>* value);

  constexpr void __cordl_internal_set_m_nextIdToTry(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadLocal_1_IdManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadLocal_1_IdManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadLocal_1_IdManager(ThreadLocal_1_IdManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadLocal_1_IdManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadLocal_1_IdManager(ThreadLocal_1_IdManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2716 };

  /// @brief Field m_nextIdToTry, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_nextIdToTry;

  /// @brief Field m_freeIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<bool>* ___m_freeIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
// Dependencies System.Object
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Threading.ThreadLocal`1/FinalizationHelper<T>
class CORDL_TYPE ThreadLocal_1_FinalizationHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field SlotArray, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_SlotArray,
                      put = __cordl_internal_set_SlotArray)) ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*>
      SlotArray;

  /// @brief Field m_trackAllValues, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_trackAllValues, put = __cordl_internal_set_m_trackAllValues)) bool m_trackAllValues;

  /// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::System::Threading::ThreadLocal_1_FinalizationHelper<T>*
  New_ctor(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> slotArray, bool trackAllValues);

  constexpr ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> const& __cordl_internal_get_SlotArray() const;

  constexpr ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*>& __cordl_internal_get_SlotArray();

  constexpr bool const& __cordl_internal_get_m_trackAllValues() const;

  constexpr bool& __cordl_internal_get_m_trackAllValues();

  constexpr void __cordl_internal_set_SlotArray(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> value);

  constexpr void __cordl_internal_set_m_trackAllValues(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> slotArray, bool trackAllValues);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadLocal_1_FinalizationHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadLocal_1_FinalizationHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadLocal_1_FinalizationHelper(ThreadLocal_1_FinalizationHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadLocal_1_FinalizationHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadLocal_1_FinalizationHelper(ThreadLocal_1_FinalizationHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2717 };

  /// @brief Field SlotArray, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> ___SlotArray;

  /// @brief Field m_trackAllValues, offset: 0x18, size: 0x1, def value: None
  bool ___m_trackAllValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
// Dependencies System.Object
namespace System::Threading {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Threading.ThreadLocal`1<T>
class CORDL_TYPE ThreadLocal_1 : public ::System::Object {
public:
  // Declarations
  using FinalizationHelper = ::System::Threading::ThreadLocal_1_FinalizationHelper<T>;

  using IdManager = ::System::Threading::ThreadLocal_1_IdManager<T>;

  using LinkedSlot = ::System::Threading::ThreadLocal_1_LinkedSlot<T>;

  using LinkedSlotVolatile = ::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>;

  __declspec(property(get = get_IsValueCreated)) bool IsValueCreated;

  __declspec(property(get = get_Value, put = set_Value)) T Value;

  /// @brief Field m_idComplement, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_idComplement, put = __cordl_internal_set_m_idComplement)) int32_t m_idComplement;

  /// @brief Field m_initialized, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_initialized, put = __cordl_internal_set_m_initialized)) bool m_initialized;

  /// @brief Field m_linkedSlot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_linkedSlot, put = __cordl_internal_set_m_linkedSlot)) ::System::Threading::ThreadLocal_1_LinkedSlot<T>* m_linkedSlot;

  /// @brief Field m_trackAllValues, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_trackAllValues, put = __cordl_internal_set_m_trackAllValues)) bool m_trackAllValues;

  /// @brief Field m_valueFactory, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_valueFactory, put = __cordl_internal_set_m_valueFactory)) ::System::Func_1<T>* m_valueFactory;

  /// @brief Field s_idManager, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_idManager, put = setStaticF_s_idManager)) ::System::Threading::ThreadLocal_1_IdManager<T>* s_idManager;

  /// @brief Field ts_finalizationHelper, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ts_finalizationHelper, put = setStaticF_ts_finalizationHelper)) ::System::Threading::ThreadLocal_1_FinalizationHelper<T>* ts_finalizationHelper;

  /// @brief Field ts_slotArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ts_slotArray,
                      put = setStaticF_ts_slotArray)) ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*>
      ts_slotArray;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateLinkedSlot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CreateLinkedSlot(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> slotArray, int32_t id, T value);

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
  inline void GrowTable(::ByRef<::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*>> table, int32_t minLength);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Initialize(::System::Func_1<T>* valueFactory, bool trackAllValues);

  static inline ::System::Threading::ThreadLocal_1<T>* New_ctor();

  static inline ::System::Threading::ThreadLocal_1<T>* New_ctor(::System::Func_1<T>* valueFactory);

  /// @brief Method SetValueSlow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetValueSlow(T value, ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> slotArray);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_m_idComplement() const;

  constexpr int32_t& __cordl_internal_get_m_idComplement();

  constexpr bool const& __cordl_internal_get_m_initialized() const;

  constexpr bool& __cordl_internal_get_m_initialized();

  constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>* const& __cordl_internal_get_m_linkedSlot() const;

  constexpr ::System::Threading::ThreadLocal_1_LinkedSlot<T>*& __cordl_internal_get_m_linkedSlot();

  constexpr bool const& __cordl_internal_get_m_trackAllValues() const;

  constexpr bool& __cordl_internal_get_m_trackAllValues();

  constexpr ::System::Func_1<T>* const& __cordl_internal_get_m_valueFactory() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get_m_valueFactory();

  constexpr void __cordl_internal_set_m_idComplement(int32_t value);

  constexpr void __cordl_internal_set_m_initialized(bool value);

  constexpr void __cordl_internal_set_m_linkedSlot(::System::Threading::ThreadLocal_1_LinkedSlot<T>* value);

  constexpr void __cordl_internal_set_m_trackAllValues(bool value);

  constexpr void __cordl_internal_set_m_valueFactory(::System::Func_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<T>* valueFactory);

  static inline ::System::Threading::ThreadLocal_1_IdManager<T>* getStaticF_s_idManager();

  static inline ::System::Threading::ThreadLocal_1_FinalizationHelper<T>* getStaticF_ts_finalizationHelper();

  static inline ::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> getStaticF_ts_slotArray();

  /// @brief Method get_IsValueCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsValueCreated();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_idManager(::System::Threading::ThreadLocal_1_IdManager<T>* value);

  static inline void setStaticF_ts_finalizationHelper(::System::Threading::ThreadLocal_1_FinalizationHelper<T>* value);

  static inline void setStaticF_ts_slotArray(::ArrayW<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>, ::Array<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>*> value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2718 };

  /// @brief Field m_valueFactory, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___m_valueFactory;

  /// @brief Field m_idComplement, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_idComplement;

  /// @brief Field m_initialized, offset: 0x1c, size: 0x1, def value: None
  bool ___m_initialized;

  /// @brief Field m_linkedSlot, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::ThreadLocal_1_LinkedSlot<T>* ___m_linkedSlot;

  /// @brief Field m_trackAllValues, offset: 0x28, size: 0x1, def value: None
  bool ___m_trackAllValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::ThreadLocal_1, "System.Threading", "ThreadLocal`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::ThreadLocal_1_FinalizationHelper, "System.Threading", "ThreadLocal`1/FinalizationHelper");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::ThreadLocal_1_IdManager, "System.Threading", "ThreadLocal`1/IdManager");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::ThreadLocal_1_LinkedSlot, "System.Threading", "ThreadLocal`1/LinkedSlot");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::ThreadLocal_1_LinkedSlotVolatile, "System.Threading", "ThreadLocal`1/LinkedSlotVolatile");
