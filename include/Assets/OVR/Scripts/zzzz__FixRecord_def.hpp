#pragma once
// IWYU pragma private; include "Assets/OVR/Scripts/FixRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Assets/OVR/Scripts/zzzz__Record_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixRecord)
namespace Assets::OVR::Scripts {
class FixMethodDelegate;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Assets::OVR::Scripts {
class FixRecord;
}
// Write type traits
MARK_REF_PTR_T(::Assets::OVR::Scripts::FixRecord);
// Dependencies Assets.OVR.Scripts.Record
namespace Assets::OVR::Scripts {
// Is value type: false
// CS Name: Assets.OVR.Scripts.FixRecord
class CORDL_TYPE FixRecord : public ::Assets::OVR::Scripts::Record {
public:
  // Declarations
  /// @brief Field buttonNames, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonNames, put = __cordl_internal_set_buttonNames)) ::ArrayW<::StringW, ::Array<::StringW>*> buttonNames;

  /// @brief Field complete, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_complete, put = __cordl_internal_set_complete)) bool complete;

  /// @brief Field editModeRequired, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_editModeRequired, put = __cordl_internal_set_editModeRequired)) bool editModeRequired;

  /// @brief Field fixMethod, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_fixMethod, put = __cordl_internal_set_fixMethod)) ::Assets::OVR::Scripts::FixMethodDelegate* fixMethod;

  /// @brief Field targetObject, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_targetObject, put = __cordl_internal_set_targetObject)) ::UnityW<::UnityEngine::Object> targetObject;

  static inline ::Assets::OVR::Scripts::FixRecord* New_ctor(int32_t order, ::StringW cat, ::StringW msg, ::Assets::OVR::Scripts::FixMethodDelegate* fix, ::UnityEngine::Object* target,
                                                            bool editRequired, ::ArrayW<::StringW, ::Array<::StringW>*> buttons);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_buttonNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_buttonNames();

  constexpr bool const& __cordl_internal_get_complete() const;

  constexpr bool& __cordl_internal_get_complete();

  constexpr bool const& __cordl_internal_get_editModeRequired() const;

  constexpr bool& __cordl_internal_get_editModeRequired();

  constexpr ::Assets::OVR::Scripts::FixMethodDelegate* const& __cordl_internal_get_fixMethod() const;

  constexpr ::Assets::OVR::Scripts::FixMethodDelegate*& __cordl_internal_get_fixMethod();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_targetObject() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_targetObject();

  constexpr void __cordl_internal_set_buttonNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_complete(bool value);

  constexpr void __cordl_internal_set_editModeRequired(bool value);

  constexpr void __cordl_internal_set_fixMethod(::Assets::OVR::Scripts::FixMethodDelegate* value);

  constexpr void __cordl_internal_set_targetObject(::UnityW<::UnityEngine::Object> value);

  /// @brief Method .ctor, addr 0x5c34ea4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t order, ::StringW cat, ::StringW msg, ::Assets::OVR::Scripts::FixMethodDelegate* fix, ::UnityEngine::Object* target, bool editRequired,
                    ::ArrayW<::StringW, ::Array<::StringW>*> buttons);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixRecord();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixRecord(FixRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixRecord(FixRecord const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8529 };

  /// @brief Field fixMethod, offset: 0x28, size: 0x8, def value: None
  ::Assets::OVR::Scripts::FixMethodDelegate* ___fixMethod;

  /// @brief Field targetObject, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___targetObject;

  /// @brief Field buttonNames, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___buttonNames;

  /// @brief Field editModeRequired, offset: 0x40, size: 0x1, def value: None
  bool ___editModeRequired;

  /// @brief Field complete, offset: 0x41, size: 0x1, def value: None
  bool ___complete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Assets::OVR::Scripts::FixRecord, ___fixMethod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Assets::OVR::Scripts::FixRecord, ___targetObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Assets::OVR::Scripts::FixRecord, ___buttonNames) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Assets::OVR::Scripts::FixRecord, ___editModeRequired) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Assets::OVR::Scripts::FixRecord, ___complete) == 0x41, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Assets::OVR::Scripts::FixRecord, 0x48>, "Size mismatch!");

} // namespace Assets::OVR::Scripts
NEED_NO_BOX(::Assets::OVR::Scripts::FixRecord);
DEFINE_IL2CPP_ARG_TYPE(::Assets::OVR::Scripts::FixRecord*, "Assets.OVR.Scripts", "FixRecord");
