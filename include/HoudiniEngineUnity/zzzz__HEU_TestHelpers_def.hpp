#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_TestHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_TestHelpers)
namespace HoudiniEngineUnity {
template <typename T> class HEU_TestHelpers_RequireClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class HEU_TestHelpers_RequireStruct_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
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
template <typename T> class HEU_TestHelpers_RequireClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class HEU_TestHelpers_RequireStruct_1;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_TestHelpers);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::HEU_TestHelpers_RequireClass_1);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::HEU_TestHelpers_RequireStruct_1);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// cpp template
template <typename T>
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_TestHelpers/RequireStruct`1<T>
class CORDL_TYPE HEU_TestHelpers_RequireStruct_1 : public ::System::Object {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_TestHelpers_RequireStruct_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_TestHelpers_RequireStruct_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_TestHelpers_RequireStruct_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_TestHelpers_RequireStruct_1(HEU_TestHelpers_RequireStruct_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_TestHelpers_RequireStruct_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_TestHelpers_RequireStruct_1(HEU_TestHelpers_RequireStruct_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11872 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// cpp template
template <typename T>
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_TestHelpers/RequireClass`1<T>
class CORDL_TYPE HEU_TestHelpers_RequireClass_1 : public ::System::Object {
public:
  // Declarations
  static inline ::HoudiniEngineUnity::HEU_TestHelpers_RequireClass_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_TestHelpers_RequireClass_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_TestHelpers_RequireClass_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_TestHelpers_RequireClass_1(HEU_TestHelpers_RequireClass_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_TestHelpers_RequireClass_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_TestHelpers_RequireClass_1(HEU_TestHelpers_RequireClass_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11873 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_TestHelpers
class CORDL_TYPE HEU_TestHelpers : public ::System::Object {
public:
  // Declarations
  template <typename T> using RequireClass_1 = ::HoudiniEngineUnity::HEU_TestHelpers_RequireClass_1<T>;

  template <typename T> using RequireStruct_1 = ::HoudiniEngineUnity::HEU_TestHelpers_RequireStruct_1<T>;

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::ArrayW<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*, ::Array<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>*> a,
                                             ::ArrayW<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*, ::Array<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>*> b, ::ByRef<bool> result,
                                             ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::ArrayW<::HoudiniEngineUnity::IEquivable_1<T>*, ::Array<::HoudiniEngineUnity::IEquivable_1<T>*>*> a,
                                             ::ArrayW<::HoudiniEngineUnity::IEquivable_1<T>*, ::Array<::HoudiniEngineUnity::IEquivable_1<T>*>*> b, ::ByRef<bool> result, ::StringW header,
                                             ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x3a95a5c, size 0x140, virtual false, abstract: false, final false
  static inline bool AssertTrueLogEquivalent(::ArrayW<::StringW, ::Array<::StringW>*> a, ::ArrayW<::StringW, ::Array<::StringW>*> b, ::ByRef<bool> result, ::StringW header, ::StringW subject,
                                             ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b, ::ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1,
                                             ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::HoudiniEngineUnity::IEquivableWrapperClass_1<T>* a, ::HoudiniEngineUnity::IEquivableWrapperClass_1<T>* b, ::ByRef<bool> result, ::StringW header,
                                             ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::HoudiniEngineUnity::IEquivable_1<T>* a, ::HoudiniEngineUnity::IEquivable_1<T>* b, ::ByRef<bool> result, ::StringW header, ::StringW subject,
                                             ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x3a9596c, size 0x9c, virtual false, abstract: false, final false
  static inline bool AssertTrueLogEquivalent(::StringW a, ::StringW b, ::ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>* a,
                                             ::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>* b, ::ByRef<bool> result, ::StringW header, ::StringW subject,
                                             ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivable_1<T>*>* a,
                                             ::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivable_1<T>*>* b, ::ByRef<bool> result, ::StringW header, ::StringW subject,
                                             ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::System::Collections::Generic::List_1<T>* a, ::System::Collections::Generic::List_1<T>* b, ::ByRef<bool> result, ::StringW header, ::StringW subject,
                                             ::StringW optional1, ::StringW optional2, ::StringW optional3, ::HoudiniEngineUnity::HEU_TestHelpers_RequireClass_1<T>* _);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(::System::Collections::Generic::List_1<T>* a, ::System::Collections::Generic::List_1<T>* b, ::ByRef<bool> result, ::StringW header, ::StringW subject,
                                             ::StringW optional1, ::StringW optional2, ::StringW optional3, ::HoudiniEngineUnity::HEU_TestHelpers_RequireStruct_1<T>* _);

  /// @brief Method AssertTrueLogEquivalent, addr 0x3a94d88, size 0x114, virtual false, abstract: false, final false
  static inline bool AssertTrueLogEquivalent(::UnityEngine::GameObject* a, ::UnityEngine::GameObject* b, ::ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1,
                                             ::StringW optional2, ::StringW optional3);

  /// @brief Method AssertTrueLogEquivalent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool AssertTrueLogEquivalent(T a, T b, ::ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3,
                                             ::HoudiniEngineUnity::HEU_TestHelpers_RequireStruct_1<T>* _);

  static inline ::HoudiniEngineUnity::HEU_TestHelpers* New_ctor();

  /// @brief Method PrintTestLogAndSetResult, addr 0x3a957fc, size 0x170, virtual false, abstract: false, final false
  static inline void PrintTestLogAndSetResult(bool expression, ::ByRef<bool> result, ::StringW header, ::StringW subject, ::StringW optional1, ::StringW optional2, ::StringW optional3);

  /// @brief Method ShouldBeTested, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ShouldBeTested(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b, ::ByRef<bool> bResult, ::StringW header, ::StringW subject);

  /// @brief Method ShouldBeTested, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool ShouldBeTested(::HoudiniEngineUnity::IEquivableWrapperClass_1<T>* a, ::HoudiniEngineUnity::IEquivableWrapperClass_1<T>* b, ::ByRef<bool> bResult, ::StringW header,
                                    ::StringW subject);

  /// @brief Method ShouldBeTested, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool ShouldBeTested(::HoudiniEngineUnity::IEquivable_1<T>* a, ::HoudiniEngineUnity::IEquivable_1<T>* b, ::ByRef<bool> bResult, ::StringW header, ::StringW subject);

  /// @brief Method ShouldBeTested, addr 0x3a95a08, size 0x54, virtual false, abstract: false, final false
  static inline bool ShouldBeTested(::StringW a, ::StringW b, ::ByRef<bool> bResult, ::StringW header, ::StringW subject);

  /// @brief Method ShouldBeTested, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline bool ShouldBeTested(::System::Collections::Generic::List_1<T>* a, ::System::Collections::Generic::List_1<T>* b, ::ByRef<bool> bResult, ::StringW header, ::StringW subject);

  /// @brief Method ShouldBeTested, addr 0x3a94e9c, size 0x2bc, virtual false, abstract: false, final false
  static inline bool ShouldBeTested(::UnityEngine::GameObject* a, ::UnityEngine::GameObject* b, ::ByRef<bool> bResult, ::StringW header, ::StringW subject);

  /// @brief Method ShouldBeTested, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ShouldBeTested(T a, T b, ::ByRef<bool> bResult, ::StringW header, ::StringW subject);

  /// @brief Method TestOutputObjectEquivalence, addr 0x3a95158, size 0x6a4, virtual false, abstract: false, final false
  static inline bool TestOutputObjectEquivalence(::UnityEngine::GameObject* a, ::UnityEngine::GameObject* b);

  /// @brief Method .ctor, addr 0x3a95dc4, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11874 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_TestHelpers, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TestHelpers);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TestHelpers*, "HoudiniEngineUnity", "HEU_TestHelpers");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::HEU_TestHelpers_RequireClass_1, "HoudiniEngineUnity", "HEU_TestHelpers/RequireClass`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::HEU_TestHelpers_RequireStruct_1, "HoudiniEngineUnity", "HEU_TestHelpers/RequireStruct`1");
