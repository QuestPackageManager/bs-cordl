#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Extensions)
namespace Newtonsoft::Json::Linq {
template <typename T, typename U> class Extensions__Convert_d__14_2;
}
namespace Newtonsoft::Json::Linq {
template <typename T, typename U> class Extensions__Values_d__11_2;
}
namespace Newtonsoft::Json::Linq {
class Extensions___c;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class Extensions___c__0_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T, typename U> class Extensions___c__13_2;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class Extensions___c__1_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class Extensions___c__2_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class Extensions___c__3_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class IJEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class Extensions;
}
namespace Newtonsoft::Json::Linq {
template <typename T, typename U> class Extensions__Convert_d__14_2;
}
namespace Newtonsoft::Json::Linq {
template <typename T, typename U> class Extensions__Values_d__11_2;
}
namespace Newtonsoft::Json::Linq {
class Extensions___c;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class Extensions___c__0_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T, typename U> class Extensions___c__13_2;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class Extensions___c__1_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class Extensions___c__2_1;
}
namespace Newtonsoft::Json::Linq {
template <typename T> class Extensions___c__3_1;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::Extensions);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::Extensions__Values_d__11_2);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::Extensions___c);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::Extensions___c__0_1);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::Extensions___c__13_2);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::Extensions___c__1_1);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::Extensions___c__2_1);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Linq::Extensions___c__3_1);
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.Extensions/<>c
class CORDL_TYPE Extensions___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Linq::Extensions___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0,
                      put = setStaticF___9__4_0)) ::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>* __9__4_0;

  static inline ::Newtonsoft::Json::Linq::Extensions___c* New_ctor();

  /// @brief Method <Properties>b__4_0, addr 0x3f0cbe8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>* _Properties_b__4_0(::Newtonsoft::Json::Linq::JObject* d);

  /// @brief Method .ctor, addr 0x3f0cbe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::Extensions___c* getStaticF___9();

  static inline ::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>* getStaticF___9__4_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::Extensions___c* value);

  static inline void setStaticF___9__4_0(::System::Func_2<::Newtonsoft::Json::Linq::JObject*, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions___c(Extensions___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions___c(Extensions___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10380 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::Extensions___c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.Extensions/<>c__0`1<T>
class CORDL_TYPE Extensions___c__0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Linq::Extensions___c__0_1<T>* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* __9__0_0;

  static inline ::Newtonsoft::Json::Linq::Extensions___c__0_1<T>* New_ctor();

  /// @brief Method <Ancestors>b__0_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _Ancestors_b__0_0(T j);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::Extensions___c__0_1<T>* getStaticF___9();

  static inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* getStaticF___9__0_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::Extensions___c__0_1<T>* value);

  static inline void setStaticF___9__0_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions___c__0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions___c__0_1(Extensions___c__0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions___c__0_1(Extensions___c__0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10381 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.Extensions/<>c__1`1<T>
class CORDL_TYPE Extensions___c__1_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Linq::Extensions___c__1_1<T>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* __9__1_0;

  static inline ::Newtonsoft::Json::Linq::Extensions___c__1_1<T>* New_ctor();

  /// @brief Method <AncestorsAndSelf>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _AncestorsAndSelf_b__1_0(T j);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::Extensions___c__1_1<T>* getStaticF___9();

  static inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* getStaticF___9__1_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::Extensions___c__1_1<T>* value);

  static inline void setStaticF___9__1_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions___c__1_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions___c__1_1(Extensions___c__1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions___c__1_1(Extensions___c__1_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10382 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T, typename U>
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.Extensions/<>c__13`2<T,U>
class CORDL_TYPE Extensions___c__13_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>* __9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0)) ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* __9__13_0;

  static inline ::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>* New_ctor();

  /// @brief Method <Children>b__13_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _Children_b__13_0(T c);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>* getStaticF___9();

  static inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* getStaticF___9__13_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>* value);

  static inline void setStaticF___9__13_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions___c__13_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__13_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions___c__13_2(Extensions___c__13_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__13_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions___c__13_2(Extensions___c__13_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.Extensions/<>c__2`1<T>
class CORDL_TYPE Extensions___c__2_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Linq::Extensions___c__2_1<T>* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* __9__2_0;

  static inline ::Newtonsoft::Json::Linq::Extensions___c__2_1<T>* New_ctor();

  /// @brief Method <Descendants>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _Descendants_b__2_0(T j);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::Extensions___c__2_1<T>* getStaticF___9();

  static inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::Extensions___c__2_1<T>* value);

  static inline void setStaticF___9__2_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions___c__2_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__2_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions___c__2_1(Extensions___c__2_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__2_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions___c__2_1(Extensions___c__2_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10384 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.Extensions/<>c__3`1<T>
class CORDL_TYPE Extensions___c__3_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Linq::Extensions___c__3_1<T>* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* __9__3_0;

  static inline ::Newtonsoft::Json::Linq::Extensions___c__3_1<T>* New_ctor();

  /// @brief Method <DescendantsAndSelf>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* _DescendantsAndSelf_b__3_0(T j);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::Extensions___c__3_1<T>* getStaticF___9();

  static inline ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* getStaticF___9__3_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::Extensions___c__3_1<T>* value);

  static inline void setStaticF___9__3_0(::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions___c__3_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__3_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions___c__3_1(Extensions___c__3_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions___c__3_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions___c__3_1(Extensions___c__3_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10385 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T, typename U>
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.Extensions/<Convert>d__14`2<T,U>
class CORDL_TYPE Extensions__Convert_d__14_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_U__get_Current)) U System_Collections_Generic_IEnumerator_U__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) U __2__current;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::System::Collections::Generic::IEnumerable_1<T>* __3__source;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<T>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<T>* source;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<U>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<U>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<U>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<U>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<U>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<U>* System_Collections_Generic_IEnumerable_U__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<U>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline U System_Collections_Generic_IEnumerator_U__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr U const& __cordl_internal_get___2__current() const;

  constexpr U& __cordl_internal_get___2__current();

  constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& __cordl_internal_get___3__source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get___3__source();

  constexpr ::System::Collections::Generic::IEnumerator_1<T>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<T>*& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(U value);

  constexpr void __cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<T>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<T>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<U>"
  constexpr ::System::Collections::Generic::IEnumerable_1<U>* i___System__Collections__Generic__IEnumerable_1_U_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<U>"
  constexpr ::System::Collections::Generic::IEnumerator_1<U>* i___System__Collections__Generic__IEnumerator_1_U_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions__Convert_d__14_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions__Convert_d__14_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions__Convert_d__14_2(Extensions__Convert_d__14_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions__Convert_d__14_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions__Convert_d__14_2(Extensions__Convert_d__14_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10386 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  U _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* ___source;

  /// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* _____3__source;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<T>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace Newtonsoft::Json::Linq {
// cpp template
template <typename T, typename U>
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.Extensions/<Values>d__11`2<T,U>
class CORDL_TYPE Extensions__Values_d__11_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_U__get_Current)) U System_Collections_Generic_IEnumerator_U__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) U __2__current;

  /// @brief Field <>3__key, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__key, put = __cordl_internal_set___3__key)) ::System::Object* __3__key;

  /// @brief Field <>3__source, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__source, put = __cordl_internal_set___3__source)) ::System::Collections::Generic::IEnumerable_1<T>* __3__source;

  /// @brief Field <>7__wrap1, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<T>* __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field key, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::System::Object* key;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Collections::Generic::IEnumerable_1<T>* source;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<U>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<U>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<U>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<U>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<U>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<U>* System_Collections_Generic_IEnumerable_U__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<U>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline U System_Collections_Generic_IEnumerator_U__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr U const& __cordl_internal_get___2__current() const;

  constexpr U& __cordl_internal_get___2__current();

  constexpr ::System::Object* const& __cordl_internal_get___3__key() const;

  constexpr ::System::Object*& __cordl_internal_get___3__key();

  constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& __cordl_internal_get___3__source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get___3__source();

  constexpr ::System::Collections::Generic::IEnumerator_1<T>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<T>*& __cordl_internal_get___7__wrap1();

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Object* const& __cordl_internal_get_key() const;

  constexpr ::System::Object*& __cordl_internal_get_key();

  constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& __cordl_internal_get_source() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<T>*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(U value);

  constexpr void __cordl_internal_set___3__key(::System::Object* value);

  constexpr void __cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<T>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<T>* value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_key(::System::Object* value);

  constexpr void __cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<T>* value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method <>m__Finally3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally3();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<U>"
  constexpr ::System::Collections::Generic::IEnumerable_1<U>* i___System__Collections__Generic__IEnumerable_1_U_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<U>"
  constexpr ::System::Collections::Generic::IEnumerator_1<U>* i___System__Collections__Generic__IEnumerator_1_U_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions__Values_d__11_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions__Values_d__11_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions__Values_d__11_2(Extensions__Values_d__11_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions__Values_d__11_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions__Values_d__11_2(Extensions__Values_d__11_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10387 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  U _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* ___source;

  /// @brief Field <>3__source, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<T>* _____3__source;

  /// @brief Field key, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field <>3__key, offset: 0x40, size: 0x8, def value: None
  ::System::Object* _____3__key;

  /// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<T>* _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  template <typename T, typename U> using _Convert_d__14_2 = ::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2<T, U>;

  template <typename T, typename U> using _Values_d__11_2 = ::Newtonsoft::Json::Linq::Extensions__Values_d__11_2<T, U>;

  using __c = ::Newtonsoft::Json::Linq::Extensions___c;

  template <typename T> using __c__0_1 = ::Newtonsoft::Json::Linq::Extensions___c__0_1<T>;

  template <typename T, typename U> using __c__13_2 = ::Newtonsoft::Json::Linq::Extensions___c__13_2<T, U>;

  template <typename T> using __c__1_1 = ::Newtonsoft::Json::Linq::Extensions___c__1_1<T>;

  template <typename T> using __c__2_1 = ::Newtonsoft::Json::Linq::Extensions___c__2_1<T>;

  template <typename T> using __c__3_1 = ::Newtonsoft::Json::Linq::Extensions___c__3_1<T>;

  /// @brief Method Ancestors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Ancestors(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method AncestorsAndSelf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* AncestorsAndSelf(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method AsJEnumerable, addr 0x3f0cb34, size 0x48, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* AsJEnumerable(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source);

  /// @brief Method AsJEnumerable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<T>* AsJEnumerable(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method Children, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Children(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method Children, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::System::Collections::Generic::IEnumerable_1<U>* Children(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::System::Collections::Generic::IEnumerable_1<U>* Convert(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline U Convert(T token);

  /// @brief Method Descendants, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Descendants(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method DescendantsAndSelf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* DescendantsAndSelf(::System::Collections::Generic::IEnumerable_1<T>* source);

  /// @brief Method Properties, addr 0x3f0c9a0, size 0x138, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>* Properties(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JObject*>* source);

  /// @brief Method Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline U Value(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* value);

  /// @brief Method Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline U Value(::System::Collections::Generic::IEnumerable_1<T>* value);

  /// @brief Method Values, addr 0x3f0cb7c, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source);

  /// @brief Method Values, addr 0x3f0cad8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source,
                                                                                                    ::System::Object* key);

  /// @brief Method Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline ::System::Collections::Generic::IEnumerable_1<U>* Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source);

  /// @brief Method Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U>
  static inline ::System::Collections::Generic::IEnumerable_1<U>* Values(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* source, ::System::Object* key);

  /// @brief Method Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::System::Collections::Generic::IEnumerable_1<U>* Values(::System::Collections::Generic::IEnumerable_1<T>* source, ::System::Object* key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions(Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions(Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10388 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::Extensions, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::Extensions*, "Newtonsoft.Json.Linq", "Extensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::Extensions__Convert_d__14_2, "Newtonsoft.Json.Linq", "Extensions/<Convert>d__14`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::Extensions__Values_d__11_2, "Newtonsoft.Json.Linq", "Extensions/<Values>d__11`2");
NEED_NO_BOX(::Newtonsoft::Json::Linq::Extensions___c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::Extensions___c*, "Newtonsoft.Json.Linq", "Extensions/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::Extensions___c__0_1, "Newtonsoft.Json.Linq", "Extensions/<>c__0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::Extensions___c__13_2, "Newtonsoft.Json.Linq", "Extensions/<>c__13`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::Extensions___c__1_1, "Newtonsoft.Json.Linq", "Extensions/<>c__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::Extensions___c__2_1, "Newtonsoft.Json.Linq", "Extensions/<>c__2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Linq::Extensions___c__3_1, "Newtonsoft.Json.Linq", "Extensions/<>c__3`1");
