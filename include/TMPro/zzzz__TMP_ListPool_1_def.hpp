#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TMP_ListPool_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
template <typename T> class TMP_ObjectPool_1;
}
namespace TMPro {
template <typename T> class __TMP_ListPool_1____c;
}
// Forward declare root types
namespace TMPro {
template <typename T> class TMP_ListPool_1;
}
namespace TMPro {
template <typename T> class __TMP_ListPool_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::TMPro::TMP_ListPool_1);
MARK_GEN_REF_PTR_T(::TMPro::__TMP_ListPool_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12293))
// CS Name: ::TMP_ListPool`1::<>c<T>*
class CORDL_TYPE __TMP_ListPool_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::TMPro::__TMP_ListPool_1____c<T>* __9;

  static inline void setStaticF___9(::TMPro::__TMP_ListPool_1____c<T>* value);

  static inline ::TMPro::__TMP_ListPool_1____c<T>* getStaticF___9();

  static inline ::TMPro::__TMP_ListPool_1____c<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.cctor>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __cctor_b__3_0(::System::Collections::Generic::List_1<T>* l);

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_ListPool_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TMP_ListPool_1____c(__TMP_ListPool_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TMP_ListPool_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TMP_ListPool_1____c(__TMP_ListPool_1____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TMP_ListPool_1____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
// Type: TMPro::TMP_ListPool`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12294))
// CS Name: ::TMPro::TMP_ListPool`1<T>*
class CORDL_TYPE TMP_ListPool_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::TMPro::__TMP_ListPool_1____c<T>;

  /// @brief Field s_ListPool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ListPool, put = setStaticF_s_ListPool))::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>* s_ListPool;

  static inline void setStaticF_s_ListPool(::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>* value);

  static inline ::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>* getStaticF_s_ListPool();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<T>* Get();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release(::System::Collections::Generic::List_1<T>* toRelease);

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ListPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_ListPool_1(TMP_ListPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_ListPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_ListPool_1(TMP_ListPool_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_ListPool_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::TMPro::TMP_ListPool_1, "TMPro", "TMP_ListPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::TMPro::__TMP_ListPool_1____c, "TMPro", "TMP_ListPool`1/<>c");
