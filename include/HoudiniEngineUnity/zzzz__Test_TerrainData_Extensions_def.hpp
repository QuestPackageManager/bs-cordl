#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Test_TerrainData_Extensions)
namespace HoudiniEngineUnity {
class Test_TerrainData;
}
namespace HoudiniEngineUnity {
class __Test_TerrainData_Extensions____c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class TerrainData;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_TerrainData_Extensions;
}
namespace HoudiniEngineUnity {
class __Test_TerrainData_Extensions____c;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_TerrainData_Extensions);
MARK_REF_PTR_T(::HoudiniEngineUnity::__Test_TerrainData_Extensions____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9943))
// CS Name: ::Test_TerrainData_Extensions::<>c*
class CORDL_TYPE __Test_TerrainData_Extensions____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::HoudiniEngineUnity::__Test_TerrainData_Extensions____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Converter_2<::UnityEngine::TerrainData*, ::HoudiniEngineUnity::Test_TerrainData*>* __9__1_0;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Converter_2<::UnityEngine::TerrainData*, ::HoudiniEngineUnity::Test_TerrainData*>* __9__2_0;

  static inline void setStaticF___9(::HoudiniEngineUnity::__Test_TerrainData_Extensions____c* value);

  static inline ::HoudiniEngineUnity::__Test_TerrainData_Extensions____c* getStaticF___9();

  static inline void setStaticF___9__1_0(::System::Converter_2<::UnityEngine::TerrainData*, ::HoudiniEngineUnity::Test_TerrainData*>* value);

  static inline ::System::Converter_2<::UnityEngine::TerrainData*, ::HoudiniEngineUnity::Test_TerrainData*>* getStaticF___9__1_0();

  static inline void setStaticF___9__2_0(::System::Converter_2<::UnityEngine::TerrainData*, ::HoudiniEngineUnity::Test_TerrainData*>* value);

  static inline ::System::Converter_2<::UnityEngine::TerrainData*, ::HoudiniEngineUnity::Test_TerrainData*>* getStaticF___9__2_0();

  static inline ::HoudiniEngineUnity::__Test_TerrainData_Extensions____c* New_ctor();

  /// @brief Method .ctor addr 0x21e90b8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ToTestObject>b__1_0 addr 0x21e90c0 size 0x64 virtual false final false
  inline ::HoudiniEngineUnity::Test_TerrainData* _ToTestObject_b__1_0(::UnityEngine::TerrainData* lod);

  /// @brief Method <ToTestObject>b__2_0 addr 0x21e9124 size 0x64 virtual false final false
  inline ::HoudiniEngineUnity::Test_TerrainData* _ToTestObject_b__2_0(::UnityEngine::TerrainData* lod);

  // Ctor Parameters [CppParam { name: "", ty: "__Test_TerrainData_Extensions____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Test_TerrainData_Extensions____c(__Test_TerrainData_Extensions____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Test_TerrainData_Extensions____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Test_TerrainData_Extensions____c(__Test_TerrainData_Extensions____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Test_TerrainData_Extensions____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__Test_TerrainData_Extensions____c, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::Test_TerrainData_Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9944))
// CS Name: ::HoudiniEngineUnity::Test_TerrainData_Extensions*
class CORDL_TYPE Test_TerrainData_Extensions : public ::System::Object {
public:
  // Declarations
  using __c = ::HoudiniEngineUnity::__Test_TerrainData_Extensions____c;

  /// @brief Method ToTestObject addr 0x21e8dfc size 0x64 virtual false final false
  static inline ::HoudiniEngineUnity::Test_TerrainData* ToTestObject(::UnityEngine::TerrainData* self);

  /// @brief Method ToTestObject addr 0x21e8e60 size 0xf8 virtual false final false
  static inline ::ArrayW<::HoudiniEngineUnity::Test_TerrainData*, ::Array<::HoudiniEngineUnity::Test_TerrainData*>*>
  ToTestObject(::ArrayW<::UnityEngine::TerrainData*, ::Array<::UnityEngine::TerrainData*>*> self);

  /// @brief Method ToTestObject addr 0x21e8f58 size 0xfc virtual false final false
  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_TerrainData*>* ToTestObject(::System::Collections::Generic::List_1<::UnityEngine::TerrainData*>* self);

  // Ctor Parameters [CppParam { name: "", ty: "Test_TerrainData_Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_TerrainData_Extensions(Test_TerrainData_Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_TerrainData_Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_TerrainData_Extensions(Test_TerrainData_Extensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_TerrainData_Extensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_TerrainData_Extensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_TerrainData_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_TerrainData_Extensions*, "HoudiniEngineUnity", "Test_TerrainData_Extensions");
NEED_NO_BOX(::HoudiniEngineUnity::__Test_TerrainData_Extensions____c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__Test_TerrainData_Extensions____c*, "HoudiniEngineUnity", "Test_TerrainData_Extensions/<>c");
