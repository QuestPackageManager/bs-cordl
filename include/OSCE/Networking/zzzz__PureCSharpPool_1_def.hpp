#pragma once
// IWYU pragma private; include "OSCE/Networking/PureCSharpPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PureCSharpPool_1)
namespace OSCE::Networking {
template <typename T> class PureCSharpPool_1_DebugTrace;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace OSCE::Networking {
template <typename T> class PureCSharpPool_1;
}
namespace OSCE::Networking {
template <typename T> class PureCSharpPool_1_DebugTrace;
}
// Write type traits
MARK_GEN_REF_PTR_T(::OSCE::Networking::PureCSharpPool_1);
MARK_GEN_REF_PTR_T(::OSCE::Networking::PureCSharpPool_1_DebugTrace);
// Dependencies System.Object
namespace OSCE::Networking {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OSCE.Networking.PureCSharpPool`1/DebugTrace<T>
class CORDL_TYPE PureCSharpPool_1_DebugTrace : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllocatedElement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AllocatedElement, put = __cordl_internal_set_AllocatedElement)) T AllocatedElement;

  /// @brief Field Stacktrace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Stacktrace, put = __cordl_internal_set_Stacktrace)) ::StringW Stacktrace;

  static inline ::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>* New_ctor();

  constexpr T const& __cordl_internal_get_AllocatedElement() const;

  constexpr T& __cordl_internal_get_AllocatedElement();

  constexpr ::StringW const& __cordl_internal_get_Stacktrace() const;

  constexpr ::StringW& __cordl_internal_get_Stacktrace();

  constexpr void __cordl_internal_set_AllocatedElement(T value);

  constexpr void __cordl_internal_set_Stacktrace(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PureCSharpPool_1_DebugTrace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PureCSharpPool_1_DebugTrace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PureCSharpPool_1_DebugTrace(PureCSharpPool_1_DebugTrace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PureCSharpPool_1_DebugTrace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PureCSharpPool_1_DebugTrace(PureCSharpPool_1_DebugTrace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21681 };

  /// @brief Field AllocatedElement, offset: 0x10, size: 0x8, def value: None
  T ___AllocatedElement;

  /// @brief Field Stacktrace, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Stacktrace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OSCE::Networking
// Dependencies System.Object
namespace OSCE::Networking {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OSCE.Networking.PureCSharpPool`1<T>
class CORDL_TYPE PureCSharpPool_1 : public ::System::Object {
public:
  // Declarations
  using DebugTrace = ::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>;

  /// @brief Field _balance, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__balance, put = setStaticF__balance)) int32_t _balance;

  /// @brief Field _poolCapacity, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__poolCapacity, put = setStaticF__poolCapacity)) int32_t _poolCapacity;

  /// @brief Field _pooledObjects, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pooledObjects, put = setStaticF__pooledObjects)) ::ArrayW<T, ::Array<T>*> _pooledObjects;

  /// @brief Field _pooledObjectsCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__pooledObjectsCount, put = setStaticF__pooledObjectsCount)) int32_t _pooledObjectsCount;

  /// @brief Field _traces, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__traces, put = setStaticF__traces)) ::System::Collections::Generic::List_1<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>* _traces;

  /// @brief Method GetFromPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetFromPool();

  /// @brief Method ResetPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ResetPool();

  /// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Return(T obj);

  static inline int32_t getStaticF__balance();

  static inline int32_t getStaticF__poolCapacity();

  static inline ::ArrayW<T, ::Array<T>*> getStaticF__pooledObjects();

  static inline int32_t getStaticF__pooledObjectsCount();

  static inline ::System::Collections::Generic::List_1<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>* getStaticF__traces();

  /// @brief Method get_Balance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t get_Balance();

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t get_Capacity();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t get_Count();

  /// @brief Method get_Traces, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>* get_Traces();

  static inline void setStaticF__balance(int32_t value);

  static inline void setStaticF__poolCapacity(int32_t value);

  static inline void setStaticF__pooledObjects(::ArrayW<T, ::Array<T>*> value);

  static inline void setStaticF__pooledObjectsCount(int32_t value);

  static inline void setStaticF__traces(::System::Collections::Generic::List_1<::OSCE::Networking::PureCSharpPool_1_DebugTrace<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PureCSharpPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PureCSharpPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PureCSharpPool_1(PureCSharpPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PureCSharpPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PureCSharpPool_1(PureCSharpPool_1 const&) = delete;

  /// @brief Field GROWTH_RATE offset 0xffffffff size 0x4
  static constexpr int32_t GROWTH_RATE{ static_cast<int32_t>(0x2) };

  /// @brief Field INITIAL_CAPACITY offset 0xffffffff size 0x4
  static constexpr int32_t INITIAL_CAPACITY{ static_cast<int32_t>(0x400) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21682 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OSCE::Networking
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OSCE::Networking::PureCSharpPool_1, "OSCE.Networking", "PureCSharpPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OSCE::Networking::PureCSharpPool_1_DebugTrace, "OSCE.Networking", "PureCSharpPool`1/DebugTrace");
