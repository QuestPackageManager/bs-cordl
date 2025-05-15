#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_LODGroup_Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_LODGroup_Extensions)
namespace HoudiniEngineUnity {
class Test_LODGroup_Extensions___c;
}
namespace HoudiniEngineUnity {
class Test_LODGroup;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
namespace UnityEngine {
class LODGroup;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_LODGroup_Extensions;
}
namespace HoudiniEngineUnity {
class Test_LODGroup_Extensions___c;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_LODGroup_Extensions);
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_LODGroup_Extensions___c);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_LODGroup_Extensions/<>c
class CORDL_TYPE Test_LODGroup_Extensions___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::HoudiniEngineUnity::Test_LODGroup_Extensions___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Converter_2<::UnityW<::UnityEngine::LODGroup>, ::HoudiniEngineUnity::Test_LODGroup*>* __9__1_0;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Converter_2<::UnityW<::UnityEngine::LODGroup>, ::HoudiniEngineUnity::Test_LODGroup*>* __9__2_0;

  static inline ::HoudiniEngineUnity::Test_LODGroup_Extensions___c* New_ctor();

  /// @brief Method <ToTestObject>b__1_0, addr 0x3a983f4, size 0x5c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_LODGroup* _ToTestObject_b__1_0(::UnityEngine::LODGroup* lod);

  /// @brief Method <ToTestObject>b__2_0, addr 0x3a98450, size 0x5c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_LODGroup* _ToTestObject_b__2_0(::UnityEngine::LODGroup* lod);

  /// @brief Method .ctor, addr 0x3a983ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::Test_LODGroup_Extensions___c* getStaticF___9();

  static inline ::System::Converter_2<::UnityW<::UnityEngine::LODGroup>, ::HoudiniEngineUnity::Test_LODGroup*>* getStaticF___9__1_0();

  static inline ::System::Converter_2<::UnityW<::UnityEngine::LODGroup>, ::HoudiniEngineUnity::Test_LODGroup*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::HoudiniEngineUnity::Test_LODGroup_Extensions___c* value);

  static inline void setStaticF___9__1_0(::System::Converter_2<::UnityW<::UnityEngine::LODGroup>, ::HoudiniEngineUnity::Test_LODGroup*>* value);

  static inline void setStaticF___9__2_0(::System::Converter_2<::UnityW<::UnityEngine::LODGroup>, ::HoudiniEngineUnity::Test_LODGroup*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_LODGroup_Extensions___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_LODGroup_Extensions___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_LODGroup_Extensions___c(Test_LODGroup_Extensions___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_LODGroup_Extensions___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_LODGroup_Extensions___c(Test_LODGroup_Extensions___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11892 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_LODGroup_Extensions___c, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_LODGroup_Extensions
class CORDL_TYPE Test_LODGroup_Extensions : public ::System::Object {
public:
  // Declarations
  using __c = ::HoudiniEngineUnity::Test_LODGroup_Extensions___c;

  /// @brief Method ToTestObject, addr 0x3a981a8, size 0xf0, virtual false, abstract: false, final false
  static inline ::ArrayW<::HoudiniEngineUnity::Test_LODGroup*, ::Array<::HoudiniEngineUnity::Test_LODGroup*>*>
  ToTestObject(::ArrayW<::UnityEngine::LODGroup*, ::Array<::UnityEngine::LODGroup*>*> self);

  /// @brief Method ToTestObject, addr 0x3a95f38, size 0x5c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::Test_LODGroup* ToTestObject(::UnityEngine::LODGroup* self);

  /// @brief Method ToTestObject, addr 0x3a98298, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_LODGroup*>* ToTestObject(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::LODGroup>>* self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_LODGroup_Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_LODGroup_Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_LODGroup_Extensions(Test_LODGroup_Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_LODGroup_Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_LODGroup_Extensions(Test_LODGroup_Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11893 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_LODGroup_Extensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_LODGroup_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_LODGroup_Extensions*, "HoudiniEngineUnity", "Test_LODGroup_Extensions");
NEED_NO_BOX(::HoudiniEngineUnity::Test_LODGroup_Extensions___c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_LODGroup_Extensions___c*, "HoudiniEngineUnity", "Test_LODGroup_Extensions/<>c");
