#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_AssetSerializedMetaData)
namespace HoudiniEngineUnity {
class CurveNodeData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetSerializedMetaData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetSerializedMetaData);
// Type: HoudiniEngineUnity::HEU_AssetSerializedMetaData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9617))
// CS Name: ::HoudiniEngineUnity::HEU_AssetSerializedMetaData*
class CORDL_TYPE HEU_AssetSerializedMetaData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _softDeleted, offset 0x18, size 0x1
  __declspec(property(get = __get__softDeleted, put = __set__softDeleted)) bool _softDeleted;

  /// @brief Field _savedCurveNodeData, offset 0x20, size 0x8
  __declspec(property(
      get = __get__savedCurveNodeData,
      put = __set__savedCurveNodeData))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* _savedCurveNodeData;

  __declspec(property(get = get_SoftDeleted, put = set_SoftDeleted)) bool SoftDeleted;

  __declspec(
      property(get = get_SavedCurveNodeData))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* SavedCurveNodeData;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData*>*() noexcept;

  constexpr bool& __get__softDeleted();

  constexpr bool const& __get__softDeleted() const;

  constexpr void __set__softDeleted(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>*& __get__savedCurveNodeData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>*> const&
  __get__savedCurveNodeData() const;

  constexpr void __set__savedCurveNodeData(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* value);

  /// @brief Method get_SoftDeleted, addr 0x2150918, size 0x8, virtual false, abstract: false, final false
  inline bool get_SoftDeleted();

  /// @brief Method set_SoftDeleted, addr 0x2150920, size 0xc, virtual false, abstract: false, final false
  inline void set_SoftDeleted(bool value);

  /// @brief Method get_SavedCurveNodeData, addr 0x215092c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* get_SavedCurveNodeData();

  /// @brief Method IsEquivalentTo, addr 0x2150934, size 0xbc, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_AssetSerializedMetaData* other);

  static inline ::HoudiniEngineUnity::HEU_AssetSerializedMetaData* New_ctor();

  /// @brief Method .ctor, addr 0x21509f0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSerializedMetaData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetSerializedMetaData(HEU_AssetSerializedMetaData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSerializedMetaData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetSerializedMetaData(HEU_AssetSerializedMetaData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetSerializedMetaData();

public:
  /// @brief Field _softDeleted, offset: 0x18, size: 0x1, def value: None
  bool ____softDeleted;

  /// @brief Field _savedCurveNodeData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* ____savedCurveNodeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetSerializedMetaData, 0x28>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetSerializedMetaData, ____softDeleted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetSerializedMetaData, ____savedCurveNodeData) == 0x20, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetSerializedMetaData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetSerializedMetaData*, "HoudiniEngineUnity", "HEU_AssetSerializedMetaData");
