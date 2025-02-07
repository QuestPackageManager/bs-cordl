#pragma once
// IWYU pragma private; include "TMPro/TMP_ListPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TMP_ListPool_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
template <typename T> class TMP_ListPool_1___c;
}
namespace TMPro {
template <typename T> class TMP_ObjectPool_1;
}
// Forward declare root types
namespace TMPro {
template <typename T> class TMP_ListPool_1;
}
namespace TMPro {
template <typename T> class TMP_ListPool_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::TMPro::TMP_ListPool_1);
MARK_GEN_REF_PTR_T(::TMPro::TMP_ListPool_1___c);
// Dependencies System.Object
namespace TMPro {
// cpp template
template <typename T>
// Is value type: false
// CS Name: TMPro.TMP_ListPool`1/<>c<T>
class CORDL_TYPE TMP_ListPool_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::TMPro::TMP_ListPool_1___c<T>* __9;

  static inline ::TMPro::TMP_ListPool_1___c<T>* New_ctor();

  /// @brief Method <.cctor>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__3_0(::System::Collections::Generic::List_1<T>* l);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::TMP_ListPool_1___c<T>* getStaticF___9();

  static inline void setStaticF___9(::TMPro::TMP_ListPool_1___c<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_ListPool_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_ListPool_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_ListPool_1___c(TMP_ListPool_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ListPool_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_ListPool_1___c(TMP_ListPool_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14516 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
// Dependencies System.Object
namespace TMPro {
// cpp template
template <typename T>
// Is value type: false
// CS Name: TMPro.TMP_ListPool`1<T>
class CORDL_TYPE TMP_ListPool_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::TMPro::TMP_ListPool_1___c<T>;

  /// @brief Field s_ListPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ListPool, put = setStaticF_s_ListPool)) ::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>* s_ListPool;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<T>* Get();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release(::System::Collections::Generic::List_1<T>* toRelease);

  static inline ::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>* getStaticF_s_ListPool();

  static inline void setStaticF_s_ListPool(::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_ListPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_ListPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_ListPool_1(TMP_ListPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ListPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_ListPool_1(TMP_ListPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14517 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::TMPro::TMP_ListPool_1, "TMPro", "TMP_ListPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::TMPro::TMP_ListPool_1___c, "TMPro", "TMP_ListPool`1/<>c");
