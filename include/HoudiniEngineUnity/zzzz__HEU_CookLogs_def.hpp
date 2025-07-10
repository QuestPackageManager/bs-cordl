#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_CookLogs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_CookLogs)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_CookLogs;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_CookLogs);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_CookLogs
class CORDL_TYPE HEU_CookLogs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cookLogs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cookLogs, put = __cordl_internal_set__cookLogs)) ::System::Text::StringBuilder* _cookLogs;

  /// @brief Field _currentCookLogCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__currentCookLogCount, put = __cordl_internal_set__currentCookLogCount)) int32_t _currentCookLogCount;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::HoudiniEngineUnity::HEU_CookLogs* _instance;

  /// @brief Field _lastLogStr, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lastLogStr, put = __cordl_internal_set__lastLogStr)) ::StringW _lastLogStr;

  /// @brief Field _uniqueStrOnly, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__uniqueStrOnly, put = __cordl_internal_set__uniqueStrOnly)) bool _uniqueStrOnly;

  /// @brief Method AppendCookLog, addr 0x3a679a4, size 0x100, virtual false, abstract: false, final false
  inline void AppendCookLog(::StringW logStr);

  /// @brief Method ClearCookLog, addr 0x3a67cf4, size 0x5c, virtual false, abstract: false, final false
  inline void ClearCookLog();

  /// @brief Method DeleteCookingFile, addr 0x3a67e68, size 0x88, virtual false, abstract: false, final false
  inline void DeleteCookingFile();

  /// @brief Method GetCookLogFilePath, addr 0x3a67d50, size 0x118, virtual false, abstract: false, final false
  inline ::StringW GetCookLogFilePath();

  /// @brief Method GetCookLogString, addr 0x3a67984, size 0x20, virtual false, abstract: false, final false
  inline ::StringW GetCookLogString();

  /// @brief Method GetFileSizeOfLogFile, addr 0x3a67ef0, size 0x88, virtual false, abstract: false, final false
  inline int64_t GetFileSizeOfLogFile();

  static inline ::HoudiniEngineUnity::HEU_CookLogs* New_ctor();

  /// @brief Method WriteToLogFile, addr 0x3a67aa4, size 0x250, virtual false, abstract: false, final false
  inline void WriteToLogFile(::StringW logStr, bool checkLastLogStr);

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__cookLogs() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__cookLogs();

  constexpr int32_t const& __cordl_internal_get__currentCookLogCount() const;

  constexpr int32_t& __cordl_internal_get__currentCookLogCount();

  constexpr ::StringW const& __cordl_internal_get__lastLogStr() const;

  constexpr ::StringW& __cordl_internal_get__lastLogStr();

  constexpr bool const& __cordl_internal_get__uniqueStrOnly() const;

  constexpr bool& __cordl_internal_get__uniqueStrOnly();

  constexpr void __cordl_internal_set__cookLogs(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set__currentCookLogCount(int32_t value);

  constexpr void __cordl_internal_set__lastLogStr(::StringW value);

  constexpr void __cordl_internal_set__uniqueStrOnly(bool value);

  /// @brief Method .ctor, addr 0x3a678f8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::HEU_CookLogs* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x3a67884, size 0x74, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_CookLogs* get_Instance();

  static inline void setStaticF__instance(::HoudiniEngineUnity::HEU_CookLogs* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_CookLogs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_CookLogs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_CookLogs(HEU_CookLogs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_CookLogs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_CookLogs(HEU_CookLogs const&) = delete;

  /// @brief Field MAX_COOK_LOG_COUNT offset 0xffffffff size 0x4
  static constexpr int32_t MAX_COOK_LOG_COUNT{ static_cast<int32_t>(0x2329) };

  /// @brief Field MaxLogSize offset 0xffffffff size 0x8
  static constexpr int64_t MaxLogSize{ static_cast<int64_t>(0x2faf080) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11805 };

  /// @brief Field _cookLogs, offset: 0x10, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____cookLogs;

  /// @brief Field _currentCookLogCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____currentCookLogCount;

  /// @brief Field _lastLogStr, offset: 0x20, size: 0x8, def value: None
  ::StringW ____lastLogStr;

  /// @brief Field _uniqueStrOnly, offset: 0x28, size: 0x1, def value: None
  bool ____uniqueStrOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_CookLogs, ____cookLogs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_CookLogs, ____currentCookLogCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_CookLogs, ____lastLogStr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_CookLogs, ____uniqueStrOnly) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_CookLogs, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_CookLogs);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_CookLogs*, "HoudiniEngineUnity", "HEU_CookLogs");
