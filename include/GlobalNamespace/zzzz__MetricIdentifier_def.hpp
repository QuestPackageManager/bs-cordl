#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MetricIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetricIdentifier)
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace GlobalNamespace {
class __MetricIdentifier___GetTags_d__13;
}
// Forward declare root types
namespace GlobalNamespace {
class __MetricIdentifier___GetTags_d__13;
}
namespace GlobalNamespace {
struct MetricIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__MetricIdentifier___GetTags_d__13);
MARK_VAL_T(::GlobalNamespace::MetricIdentifier);
// Type: ::MetricIdentifier
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2505), inst: 600 }), TypeDefinitionIndex(TypeDefinitionIndex(2505))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12797))
// CS Name: ::MetricIdentifier
struct CORDL_TYPE MetricIdentifier {
public:
  // Declarations
  using _GetTags_d__13 = ::GlobalNamespace::__MetricIdentifier___GetTags_d__13;

  __declspec(property(get = get_tagCount)) int32_t tagCount;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::MetricIdentifier>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::MetricIdentifier>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::MetricIdentifier>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::MetricIdentifier>*();

  /// @brief Method get_tagCount addr 0xdc3ec0 size 0x44 virtual false final false
  inline int32_t get_tagCount();

  /// @brief Method .ctor addr 0xdc2cf8 size 0xc0 virtual false final false
  inline void _ctor(::StringW metricName, ::System::ValueTuple_2<::StringW, ::StringW> tag0, ::System::ValueTuple_2<::StringW, ::StringW> tag1, ::System::ValueTuple_2<::StringW, ::StringW> tag2,
                    ::System::ValueTuple_2<::StringW, ::StringW> tag3);

  /// @brief Method CompareTo addr 0xdc3f04 size 0x98 virtual true final true
  inline int32_t CompareTo(::GlobalNamespace::MetricIdentifier other);

  /// @brief Method Equals addr 0xdc3f9c size 0x38 virtual true final true
  inline bool Equals(::GlobalNamespace::MetricIdentifier other);

  /// @brief Method Equals addr 0xdc3fd4 size 0x94 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0xdc4068 size 0xd4 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0xdc413c size 0x484 virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetTags addr 0xdc45c0 size 0x84 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::StringW, ::StringW>>* GetTags();

  /// @brief Method op_Implicit addr 0xdc4678 size 0x4c virtual false final false
  static inline ::GlobalNamespace::MetricIdentifier op_Implicit___GlobalNamespace__MetricIdentifier(::StringW metricName);

  // Ctor Parameters [CppParam { name: "metricName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_tag0", ty: "::System::ValueTuple_2<::StringW,::StringW>", modifiers: "",
  // def_value: None }, CppParam { name: "_tag1", ty: "::System::ValueTuple_2<::StringW,::StringW>", modifiers: "", def_value: None }, CppParam { name: "_tag2", ty:
  // "::System::ValueTuple_2<::StringW,::StringW>", modifiers: "", def_value: None }, CppParam { name: "_tag3", ty: "::System::ValueTuple_2<::StringW,::StringW>", modifiers: "", def_value: None }]
  constexpr MetricIdentifier(::StringW metricName, ::System::ValueTuple_2<::StringW, ::StringW> _tag0, ::System::ValueTuple_2<::StringW, ::StringW> _tag1,
                             ::System::ValueTuple_2<::StringW, ::StringW> _tag2, ::System::ValueTuple_2<::StringW, ::StringW> _tag3) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MetricIdentifier();

  /// @brief Field metricName, offset: 0x0, size: 0x8, def value: None
  ::StringW metricName;

  /// @brief Field _tag0, offset: 0x8, size: 0x10, def value: None
  ::System::ValueTuple_2<::StringW, ::StringW> _tag0;

  /// @brief Field _tag1, offset: 0x18, size: 0x10, def value: None
  ::System::ValueTuple_2<::StringW, ::StringW> _tag1;

  /// @brief Field _tag2, offset: 0x28, size: 0x10, def value: None
  ::System::ValueTuple_2<::StringW, ::StringW> _tag2;

  /// @brief Field _tag3, offset: 0x38, size: 0x10, def value: None
  ::System::ValueTuple_2<::StringW, ::StringW> _tag3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MetricIdentifier, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MetricIdentifier, metricName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetricIdentifier, _tag0) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetricIdentifier, _tag1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetricIdentifier, _tag2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetricIdentifier, _tag3) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetTags>d__13
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12797)), TypeDefinitionIndex(TypeDefinitionIndex(2505)), TypeDefinitionIndex(TypeDefinitionIndex(2611)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2505), inst: 600 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(12796)) CS Name: ::MetricIdentifier::<GetTags>d__13*
class CORDL_TYPE __MetricIdentifier___GetTags_d__13 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::ValueTuple_2<::StringW, ::StringW> __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x28, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x30, size 0x48
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MetricIdentifier __4__this;

  /// @brief Field <>3__<>4__this, offset 0x78, size 0x48
  __declspec(property(get = __get___3____4__this, put = __set___3____4__this))::GlobalNamespace::MetricIdentifier __3____4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator__System_Stringkey_System_Stringvalue___get_Current))::System::ValueTuple_2<
      ::StringW, ::StringW> System_Collections_Generic_IEnumerator__System_Stringkey_System_Stringvalue___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::StringW,::StringW>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::StringW, ::StringW>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::StringW,::StringW>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::StringW, ::StringW>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::ValueTuple_2<::StringW, ::StringW>& __get___2__current();

  constexpr ::System::ValueTuple_2<::StringW, ::StringW> const& __get___2__current() const;

  constexpr void __set___2__current(::System::ValueTuple_2<::StringW, ::StringW> value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::GlobalNamespace::MetricIdentifier& __get___4__this();

  constexpr ::GlobalNamespace::MetricIdentifier const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MetricIdentifier value);

  constexpr ::GlobalNamespace::MetricIdentifier& __get___3____4__this();

  constexpr ::GlobalNamespace::MetricIdentifier const& __get___3____4__this() const;

  constexpr void __set___3____4__this(::GlobalNamespace::MetricIdentifier value);

  static inline ::GlobalNamespace::__MetricIdentifier___GetTags_d__13* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0xdc4644 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0xdc46c4 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0xdc46c8 size 0xd4 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<(System.Stringkey,System.Stringvalue)>.get_Current addr 0xdc479c size 0xc virtual true final true
  inline ::System::ValueTuple_2<::StringW, ::StringW> System_Collections_Generic_IEnumerator__System_Stringkey_System_Stringvalue___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0xdc47a8 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0xdc47e8 size 0x5c virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<(System.Stringkey,System.Stringvalue)>.GetEnumerator addr 0xdc4844 size 0xc4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::StringW, ::StringW>>* System_Collections_Generic_IEnumerable__System_Stringkey_System_Stringvalue___GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0xdc4908 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__MetricIdentifier___GetTags_d__13", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MetricIdentifier___GetTags_d__13(__MetricIdentifier___GetTags_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MetricIdentifier___GetTags_d__13", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MetricIdentifier___GetTags_d__13(__MetricIdentifier___GetTags_d__13 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MetricIdentifier___GetTags_d__13();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::ValueTuple_2<::StringW, ::StringW> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x30, size: 0x48, def value: None
  ::GlobalNamespace::MetricIdentifier _____4__this;

  /// @brief Field <>3__<>4__this, offset: 0x78, size: 0x48, def value: None
  ::GlobalNamespace::MetricIdentifier _____3____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MetricIdentifier___GetTags_d__13, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MetricIdentifier___GetTags_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MetricIdentifier___GetTags_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MetricIdentifier___GetTags_d__13, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MetricIdentifier___GetTags_d__13, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MetricIdentifier___GetTags_d__13, _____3____4__this) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::__MetricIdentifier___GetTags_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MetricIdentifier___GetTags_d__13*, "", "MetricIdentifier/<GetTags>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MetricIdentifier, "", "MetricIdentifier");
