#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_Collider_Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Collider_Extensions)
namespace HoudiniEngineUnity {
class Test_Collider_Extensions___c;
}
namespace HoudiniEngineUnity {
class Test_Collider;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Collider_Extensions;
}
namespace HoudiniEngineUnity {
class Test_Collider_Extensions___c;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Collider_Extensions);
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Collider_Extensions___c);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_Collider_Extensions/<>c
class CORDL_TYPE Test_Collider_Extensions___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::HoudiniEngineUnity::Test_Collider_Extensions___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Converter_2<::UnityW<::UnityEngine::Collider>, ::HoudiniEngineUnity::Test_Collider*>* __9__1_0;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Converter_2<::UnityW<::UnityEngine::Collider>, ::HoudiniEngineUnity::Test_Collider*>* __9__2_0;

  static inline ::HoudiniEngineUnity::Test_Collider_Extensions___c* New_ctor();

  /// @brief Method <ToTestObject>b__1_0, addr 0x3a94278, size 0x5c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_Collider* _ToTestObject_b__1_0(::UnityEngine::Collider* lod);

  /// @brief Method <ToTestObject>b__2_0, addr 0x3a942d4, size 0x5c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_Collider* _ToTestObject_b__2_0(::UnityEngine::Collider* lod);

  /// @brief Method .ctor, addr 0x3a94270, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::Test_Collider_Extensions___c* getStaticF___9();

  static inline ::System::Converter_2<::UnityW<::UnityEngine::Collider>, ::HoudiniEngineUnity::Test_Collider*>* getStaticF___9__1_0();

  static inline ::System::Converter_2<::UnityW<::UnityEngine::Collider>, ::HoudiniEngineUnity::Test_Collider*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::HoudiniEngineUnity::Test_Collider_Extensions___c* value);

  static inline void setStaticF___9__1_0(::System::Converter_2<::UnityW<::UnityEngine::Collider>, ::HoudiniEngineUnity::Test_Collider*>* value);

  static inline void setStaticF___9__2_0(::System::Converter_2<::UnityW<::UnityEngine::Collider>, ::HoudiniEngineUnity::Test_Collider*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Collider_Extensions___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_Collider_Extensions___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Collider_Extensions___c(Test_Collider_Extensions___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Collider_Extensions___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Collider_Extensions___c(Test_Collider_Extensions___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11901 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Collider_Extensions___c, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_Collider_Extensions
class CORDL_TYPE Test_Collider_Extensions : public ::System::Object {
public:
  // Declarations
  using __c = ::HoudiniEngineUnity::Test_Collider_Extensions___c;

  /// @brief Method ToTestObject, addr 0x3a9402c, size 0xf0, virtual false, abstract: false, final false
  static inline ::ArrayW<::HoudiniEngineUnity::Test_Collider*, ::Array<::HoudiniEngineUnity::Test_Collider*>*>
  ToTestObject(::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> self);

  /// @brief Method ToTestObject, addr 0x3a9107c, size 0x5c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::Test_Collider* ToTestObject(::UnityEngine::Collider* self);

  /// @brief Method ToTestObject, addr 0x3a9411c, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Collider*>* ToTestObject(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Collider_Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_Collider_Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Collider_Extensions(Test_Collider_Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Collider_Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Collider_Extensions(Test_Collider_Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11902 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Collider_Extensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Collider_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Collider_Extensions*, "HoudiniEngineUnity", "Test_Collider_Extensions");
NEED_NO_BOX(::HoudiniEngineUnity::Test_Collider_Extensions___c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Collider_Extensions___c*, "HoudiniEngineUnity", "Test_Collider_Extensions/<>c");
