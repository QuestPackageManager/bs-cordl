#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_TestHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_TestHelpers)
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
template <typename T> class __HEU_TestHelpers__RequireClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class __HEU_TestHelpers__RequireStruct_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_TestHelpers;
}
namespace HoudiniEngineUnity {
template <typename T> class __HEU_TestHelpers__RequireClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class __HEU_TestHelpers__RequireStruct_1;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_TestHelpers);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_TestHelpers__RequireClass_1);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1);
// Type: ::RequireStruct`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::HEU_TestHelpers::RequireStruct`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireStruct_1 : public ::System::Object {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_TestHelpers__RequireStruct_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireStruct_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_TestHelpers__RequireStruct_1(__HEU_TestHelpers__RequireStruct_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
// Type: ::RequireClass`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::HEU_TestHelpers::RequireClass`1<T>*
class CORDL_TYPE __HEU_TestHelpers__RequireClass_1 : public ::System::Object {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::__HEU_TestHelpers__RequireClass_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_TestHelpers__RequireClass_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireClass_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_TestHelpers__RequireClass_1(__HEU_TestHelpers__RequireClass_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_TestHelpers__RequireClass_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_TestHelpers__RequireClass_1(__HEU_TestHelpers__RequireClass_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_TestHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_TestHelpers*
class CORDL_TYPE HEU_TestHelpers : public ::System::Object {
public:
  // Declarations
  template <typename T> using RequireClass_1 = ::HoudiniEngineUnity::__HEU_TestHelpers__RequireClass_1<T>;

  template <typename T> using RequireStruct_1 = ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<T>;

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::ArrayW<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*, ::Array<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>*> a,
                                             ::ArrayW<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*, ::Array<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>*> b, ByRef<bool> result,
                                             ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::ArrayW<::HoudiniEngineUnity::IEquivable_1<T>*, ::Array<::HoudiniEngineUnity::IEquivable_1<T>*>*> a,
                                             ::ArrayW<::HoudiniEngineUnity::IEquivable_1<T>*, ::Array<::HoudiniEngineUnity::IEquivable_1<T>*>*> b, ByRef<bool> result, ::StringW header,
                                             ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x25ddf60, size 0x140, virtual false, abstract: false, final false
  static inline bool AssertTrueLogEquivalent(::ArrayW<::StringW, ::Array<::StringW>*> a, ::ArrayW<::StringW, ::Array<::StringW>*> b, ByRef<bool> result, ::StringW header, ::StringW subject,
                                             ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2,
                                             ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::HoudiniEngineUnity::IEquivableWrapperClass_1<T>* a, ::HoudiniEngineUnity::IEquivableWrapperClass_1<T>* b, ByRef<bool> result, ::StringW header,
                                             ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::HoudiniEngineUnity::IEquivable_1<T>* a, ::HoudiniEngineUnity::IEquivable_1<T>* b, ByRef<bool> result, ::StringW header, ::StringW subject,
                                             ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x25dde70, size 0x9c, virtual false, abstract: false, final false
  static inline bool AssertTrueLogEquivalent(::StringW a, ::StringW b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>* a,
                                             ::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>* b, ByRef<bool> result, ::StringW header, ::StringW subject,
                                             ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivable_1<T>*>* a,
                                             ::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivable_1<T>*>* b, ByRef<bool> result, ::StringW header, ::StringW subject,
                                             ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::System::Collections::Generic::List_1<T>* a, ::System::Collections::Generic::List_1<T>* b, ByRef<bool> result, ::StringW header, ::StringW subject,
                                             ::StringW optional1, ::StringW optional2, ::StringW optional3, ::HoudiniEngineUnity::__HEU_TestHelpers__RequireClass_1<T>* _);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::System::Collections::Generic::List_1<T>* a, ::System::Collections::Generic::List_1<T>* b, ByRef<bool> result, ::StringW header, ::StringW subject,
                                             ::StringW optional1, ::StringW optional2, ::StringW optional3, ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<T>* _);

  /// @brief Method AssertTrueLogEquivalent, addr 0x25dd1ec, size 0x114, virtual false, abstract: false, final false
  static inline bool AssertTrueLogEquivalent(::UnityEngine::GameObject* a, ::UnityEngine::GameObject* b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1,
                                             ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(T a, T b, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3,
                                             ::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1<T>* _);

  static inline ::HoudiniEngineUnity::HEU_TestHelpers* New_ctor();

  /// @brief Method PrintTestLogAndSetResult, addr 0x25ddd10, size 0x160, virtual false, abstract: false, final false
  static inline void PrintTestLogAndSetResult(bool expression, ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method ShouldBeTested, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ShouldBeTested(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b, ByRef<bool> bResult, ::StringW header, ::StringW subject);

  /// @brief Method ShouldBeTested, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool ShouldBeTested(::HoudiniEngineUnity::IEquivableWrapperClass_1<T>* a, ::HoudiniEngineUnity::IEquivableWrapperClass_1<T>* b, ByRef<bool> bResult, ::StringW header,
                                    ::StringW subject);

  /// @brief Method ShouldBeTested, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ShouldBeTested(::HoudiniEngineUnity::IEquivable_1<T>* a, ::HoudiniEngineUnity::IEquivable_1<T>* b, ByRef<bool> bResult, ::StringW header, ::StringW subject);

  /// @brief Method ShouldBeTested, addr 0x25ddf0c, size 0x54, virtual false, abstract: false, final false
  static inline bool ShouldBeTested(::StringW a, ::StringW b, ByRef<bool> bResult, ::StringW header, ::StringW subject);

  /// @brief Method ShouldBeTested, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool ShouldBeTested(::System::Collections::Generic::List_1<T>* a, ::System::Collections::Generic::List_1<T>* b, ByRef<bool> bResult, ::StringW header, ::StringW subject);

  /// @brief Method ShouldBeTested, addr 0x25dd300, size 0x35c, virtual false, abstract: false, final false
  static inline bool ShouldBeTested(::UnityEngine::GameObject* a, ::UnityEngine::GameObject* b, ByRef<bool> bResult, ::StringW header, ::StringW subject);

  /// @brief Method ShouldBeTested, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ShouldBeTested(T a, T b, ByRef<bool> bResult, ::StringW header, ::StringW subject);

  /// @brief Method TestOutputObjectEquivalence, addr 0x25dd65c, size 0x6b4, virtual false, abstract: false, final false
  static inline bool TestOutputObjectEquivalence(::UnityEngine::GameObject* a, ::UnityEngine::GameObject* b);

  /// @brief Method .ctor, addr 0x25de2f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_TestHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_TestHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_TestHelpers(HEU_TestHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_TestHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_TestHelpers(HEU_TestHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_TestHelpers, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TestHelpers);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TestHelpers*, "HoudiniEngineUnity", "HEU_TestHelpers");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_TestHelpers__RequireClass_1, "HoudiniEngineUnity", "HEU_TestHelpers/RequireClass`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_TestHelpers__RequireStruct_1, "HoudiniEngineUnity", "HEU_TestHelpers/RequireStruct`1");
