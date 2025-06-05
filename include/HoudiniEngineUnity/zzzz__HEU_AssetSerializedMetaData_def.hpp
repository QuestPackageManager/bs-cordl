#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AssetSerializedMetaData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_AssetSerializedMetaData)
namespace HoudiniEngineUnity {
class CurveNodeData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetSerializedMetaData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetSerializedMetaData);
// Dependencies HoudiniEngineUnity.IEquivable`1<T>, UnityEngine.ScriptableObject
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_AssetSerializedMetaData
class CORDL_TYPE HEU_AssetSerializedMetaData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(
      get = get_SavedCurveNodeData)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* SavedCurveNodeData;

  __declspec(property(get = get_SoftDeleted, put = set_SoftDeleted)) bool SoftDeleted;

  /// @brief Field _savedCurveNodeData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__savedCurveNodeData, put = __cordl_internal_set__savedCurveNodeData)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* _savedCurveNodeData;

  /// @brief Field _softDeleted, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__softDeleted, put = __cordl_internal_set__softDeleted)) bool _softDeleted;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData>>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3a084f0, size 0xbc, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_AssetSerializedMetaData* other);

  static inline ::HoudiniEngineUnity::HEU_AssetSerializedMetaData* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* const&
  __cordl_internal_get__savedCurveNodeData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>*& __cordl_internal_get__savedCurveNodeData();

  constexpr bool const& __cordl_internal_get__softDeleted() const;

  constexpr bool& __cordl_internal_get__softDeleted();

  constexpr void
  __cordl_internal_set__savedCurveNodeData(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* value);

  constexpr void __cordl_internal_set__softDeleted(bool value);

  /// @brief Method .ctor, addr 0x3a085ac, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SavedCurveNodeData, addr 0x3a084e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* get_SavedCurveNodeData();

  /// @brief Method get_SoftDeleted, addr 0x3a084d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_SoftDeleted();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData>>*
  i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_AssetSerializedMetaData__() noexcept;

  /// @brief Method set_SoftDeleted, addr 0x3a084dc, size 0xc, virtual false, abstract: false, final false
  inline void set_SoftDeleted(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetSerializedMetaData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSerializedMetaData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetSerializedMetaData(HEU_AssetSerializedMetaData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSerializedMetaData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetSerializedMetaData(HEU_AssetSerializedMetaData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11604 };

  /// @brief Field _softDeleted, offset: 0x18, size: 0x1, def value: None
  bool ____softDeleted;

  /// @brief Field _savedCurveNodeData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* ____savedCurveNodeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetSerializedMetaData, ____softDeleted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetSerializedMetaData, ____savedCurveNodeData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetSerializedMetaData, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetSerializedMetaData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetSerializedMetaData*, "HoudiniEngineUnity", "HEU_AssetSerializedMetaData");
