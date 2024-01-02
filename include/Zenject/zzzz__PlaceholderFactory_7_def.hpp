#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__PlaceholderFactoryBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlaceholderFactory_7)
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue> class __PlaceholderFactory_7___get_ParamTypes_d__2;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue> class IFactory_7;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class IFactory;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue> class PlaceholderFactory_7;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue> class __PlaceholderFactory_7___get_ParamTypes_d__2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PlaceholderFactory_7);
MARK_GEN_REF_PTR_T(::Zenject::__PlaceholderFactory_7___get_ParamTypes_d__2);
// Type: ::<get_ParamTypes>d__2
// SizeInfo { instance_size: 40, native_size: 36, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11019))
// CS Name: ::PlaceholderFactory`7::<get_ParamTypes>d__2<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*
class CORDL_TYPE __PlaceholderFactory_7___get_ParamTypes_d__2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Type* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Type__get_Current))::System::Type* System_Collections_Generic_IEnumerator_System_Type__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Type*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Type* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  static inline ::Zenject::__PlaceholderFactory_7___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__PlaceholderFactory_7___get_ParamTypes_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlaceholderFactory_7___get_ParamTypes_d__2(__PlaceholderFactory_7___get_ParamTypes_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlaceholderFactory_7___get_ParamTypes_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlaceholderFactory_7___get_ParamTypes_d__2(__PlaceholderFactory_7___get_ParamTypes_d__2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlaceholderFactory_7___get_ParamTypes_d__2();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Type* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::PlaceholderFactory`7
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11026), inst: 4827 }), TypeDefinitionIndex(TypeDefinitionIndex(11026))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11020))
// CS Name: ::Zenject::PlaceholderFactory`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>*
class CORDL_TYPE PlaceholderFactory_7 : public ::Zenject::PlaceholderFactoryBase_1<TValue> {
public:
  // Declarations
  using _get_ParamTypes_d__2 = ::Zenject::__PlaceholderFactory_7___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>;

  __declspec(property(get = get_ParamTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* ParamTypes;

  /// @brief Convert operator to "::Zenject::IFactory_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TValue>"
  constexpr operator ::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*() noexcept;

  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6);

  /// @brief Method get_ParamTypes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ParamTypes();

  static inline ::Zenject::PlaceholderFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactory_7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlaceholderFactory_7(PlaceholderFactory_7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlaceholderFactory_7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlaceholderFactory_7(PlaceholderFactory_7 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaceholderFactory_7();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PlaceholderFactory_7, "Zenject", "PlaceholderFactory`7");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__PlaceholderFactory_7___get_ParamTypes_d__2, "Zenject", "PlaceholderFactory`7/<get_ParamTypes>d__2");
