#pragma once
// IWYU pragma private; include "System/Data/Listeners_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Listeners_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Data {
template <typename TElem, typename T1, typename T2, typename T3, typename T4> class Listeners_1_Action_4;
}
namespace System::Data {
template <typename TElem, typename T1, typename TResult> class Listeners_1_Func_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
template <typename TElem> class Listeners_1;
}
namespace System::Data {
template <typename TElem, typename T1, typename T2, typename T3, typename T4> class Listeners_1_Action_4;
}
namespace System::Data {
template <typename TElem, typename T1, typename TResult> class Listeners_1_Func_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Data::Listeners_1);
MARK_GEN_REF_PTR_T(::System::Data::Listeners_1_Action_4);
MARK_GEN_REF_PTR_T(::System::Data::Listeners_1_Func_2);
// Dependencies System.MulticastDelegate
namespace System::Data {
// cpp template
template <typename TElem, typename T1, typename T2, typename T3, typename T4>
// Is value type: false
// CS Name: System.Data.Listeners`1/Action`4<TElem,T1,T2,T3,T4>
class CORDL_TYPE Listeners_1_Action_4 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4);

  static inline ::System::Data::Listeners_1_Action_4<TElem, T1, T2, T3, T4>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Listeners_1_Action_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Listeners_1_Action_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Listeners_1_Action_4(Listeners_1_Action_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Listeners_1_Action_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Listeners_1_Action_4(Listeners_1_Action_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13827 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Data
// Dependencies System.MulticastDelegate
namespace System::Data {
// cpp template
template <typename TElem, typename T1, typename TResult>
// Is value type: false
// CS Name: System.Data.Listeners`1/Func`2<TElem,T1,TResult>
class CORDL_TYPE Listeners_1_Func_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TResult Invoke(T1 arg1);

  static inline ::System::Data::Listeners_1_Func_2<TElem, T1, TResult>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Listeners_1_Func_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Listeners_1_Func_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Listeners_1_Func_2(Listeners_1_Func_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Listeners_1_Func_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Listeners_1_Func_2(Listeners_1_Func_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13828 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Data
// Dependencies System.Object
namespace System::Data {
// cpp template
template <typename TElem>
// Is value type: false
// CS Name: System.Data.Listeners`1<TElem>
class CORDL_TYPE Listeners_1 : public ::System::Object {
public:
  // Declarations
  template <typename T1, typename T2, typename T3, typename T4> using Action_4 = ::System::Data::Listeners_1_Action_4<TElem, T1, T2, T3, T4>;

  template <typename T1, typename TResult> using Func_2 = ::System::Data::Listeners_1_Func_2<TElem, T1, TResult>;

  __declspec(property(get = get_HasListeners)) bool HasListeners;

  /// @brief Field _filter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__filter, put = __cordl_internal_set__filter)) ::System::Data::Listeners_1_Func_2<TElem, TElem, bool>* _filter;

  /// @brief Field _listenerReaderCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__listenerReaderCount, put = __cordl_internal_set__listenerReaderCount)) int32_t _listenerReaderCount;

  /// @brief Field _listeners, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__listeners, put = __cordl_internal_set__listeners)) ::System::Collections::Generic::List_1<TElem>* _listeners;

  /// @brief Field _objectID, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__objectID, put = __cordl_internal_set__objectID)) int32_t _objectID;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(TElem listener);

  /// @brief Method IndexOfReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOfReference(TElem listener);

  static inline ::System::Data::Listeners_1<TElem>* New_ctor(int32_t ObjectID, ::System::Data::Listeners_1_Func_2<TElem, TElem, bool>* notifyFilter);

  /// @brief Method Notify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3> inline void Notify(T1 arg1, T2 arg2, T3 arg3, ::System::Data::Listeners_1_Action_4<TElem, TElem, T1, T2, T3>* action);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(TElem listener);

  /// @brief Method RemoveNullListeners, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveNullListeners(int32_t nullIndex);

  constexpr ::System::Data::Listeners_1_Func_2<TElem, TElem, bool>* const& __cordl_internal_get__filter() const;

  constexpr ::System::Data::Listeners_1_Func_2<TElem, TElem, bool>*& __cordl_internal_get__filter();

  constexpr int32_t const& __cordl_internal_get__listenerReaderCount() const;

  constexpr int32_t& __cordl_internal_get__listenerReaderCount();

  constexpr ::System::Collections::Generic::List_1<TElem>* const& __cordl_internal_get__listeners() const;

  constexpr ::System::Collections::Generic::List_1<TElem>*& __cordl_internal_get__listeners();

  constexpr int32_t const& __cordl_internal_get__objectID() const;

  constexpr int32_t& __cordl_internal_get__objectID();

  constexpr void __cordl_internal_set__filter(::System::Data::Listeners_1_Func_2<TElem, TElem, bool>* value);

  constexpr void __cordl_internal_set__listenerReaderCount(int32_t value);

  constexpr void __cordl_internal_set__listeners(::System::Collections::Generic::List_1<TElem>* value);

  constexpr void __cordl_internal_set__objectID(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t ObjectID, ::System::Data::Listeners_1_Func_2<TElem, TElem, bool>* notifyFilter);

  /// @brief Method get_HasListeners, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_HasListeners();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Listeners_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Listeners_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Listeners_1(Listeners_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Listeners_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Listeners_1(Listeners_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13829 };

  /// @brief Field _listeners, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<TElem>* ____listeners;

  /// @brief Field _filter, offset: 0x18, size: 0x8, def value: None
  ::System::Data::Listeners_1_Func_2<TElem, TElem, bool>* ____filter;

  /// @brief Field _objectID, offset: 0x20, size: 0x4, def value: None
  int32_t ____objectID;

  /// @brief Field _listenerReaderCount, offset: 0x24, size: 0x4, def value: None
  int32_t ____listenerReaderCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Data::Listeners_1, "System.Data", "Listeners`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Data::Listeners_1_Action_4, "System.Data", "Listeners`1/Action`4");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Data::Listeners_1_Func_2, "System.Data", "Listeners`1/Func`2");
