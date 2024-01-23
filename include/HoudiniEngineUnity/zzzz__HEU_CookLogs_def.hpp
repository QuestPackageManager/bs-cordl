#pragma once
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
// Type: HoudiniEngineUnity::HEU_CookLogs
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9818))
// CS Name: ::HoudiniEngineUnity::HEU_CookLogs*
class CORDL_TYPE HEU_CookLogs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cookLogs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cookLogs, put = __cordl_internal_set__cookLogs))::System::Text::StringBuilder* _cookLogs;

  /// @brief Field _currentCookLogCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__currentCookLogCount, put = __cordl_internal_set__currentCookLogCount)) int32_t _currentCookLogCount;

  /// @brief Field _lastLogStr, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lastLogStr, put = __cordl_internal_set__lastLogStr))::StringW _lastLogStr;

  /// @brief Field _uniqueStrOnly, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__uniqueStrOnly, put = __cordl_internal_set__uniqueStrOnly)) bool _uniqueStrOnly;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::HoudiniEngineUnity::HEU_CookLogs* _instance;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__cookLogs();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__cookLogs() const;

  constexpr void __cordl_internal_set__cookLogs(::System::Text::StringBuilder* value);

  constexpr int32_t& __cordl_internal_get__currentCookLogCount();

  constexpr int32_t const& __cordl_internal_get__currentCookLogCount() const;

  constexpr void __cordl_internal_set__currentCookLogCount(int32_t value);

  constexpr ::StringW& __cordl_internal_get__lastLogStr();

  constexpr ::StringW const& __cordl_internal_get__lastLogStr() const;

  constexpr void __cordl_internal_set__lastLogStr(::StringW value);

  constexpr bool& __cordl_internal_get__uniqueStrOnly();

  constexpr bool const& __cordl_internal_get__uniqueStrOnly() const;

  constexpr void __cordl_internal_set__uniqueStrOnly(bool value);

  static inline void setStaticF__instance(::HoudiniEngineUnity::HEU_CookLogs* value);

  static inline ::HoudiniEngineUnity::HEU_CookLogs* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x21b16dc, size 0x7c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_CookLogs* get_Instance();

  /// @brief Method GetCookLogString, addr 0x21b17e4, size 0x20, virtual false, abstract: false, final false
  inline ::StringW GetCookLogString();

  /// @brief Method AppendCookLog, addr 0x21b1804, size 0x100, virtual false, abstract: false, final false
  inline void AppendCookLog(::StringW logStr);

  /// @brief Method ClearCookLog, addr 0x21b1b4c, size 0x64, virtual false, abstract: false, final false
  inline void ClearCookLog();

  /// @brief Method GetCookLogFilePath, addr 0x21b1bb0, size 0xd4, virtual false, abstract: false, final false
  inline ::StringW GetCookLogFilePath();

  /// @brief Method DeleteCookingFile, addr 0x21b1c84, size 0x88, virtual false, abstract: false, final false
  inline void DeleteCookingFile();

  /// @brief Method WriteToLogFile, addr 0x21b1904, size 0x248, virtual false, abstract: false, final false
  inline void WriteToLogFile(::StringW logStr, bool checkLastLogStr);

  /// @brief Method GetFileSizeOfLogFile, addr 0x21b1d0c, size 0x88, virtual false, abstract: false, final false
  inline int64_t GetFileSizeOfLogFile();

  static inline ::HoudiniEngineUnity::HEU_CookLogs* New_ctor();

  /// @brief Method .ctor, addr 0x21b1758, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_CookLogs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_CookLogs(HEU_CookLogs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_CookLogs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_CookLogs(HEU_CookLogs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_CookLogs();

public:
  /// @brief Field _cookLogs, offset: 0x10, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____cookLogs;

  /// @brief Field _currentCookLogCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____currentCookLogCount;

  /// @brief Field _lastLogStr, offset: 0x20, size: 0x8, def value: None
  ::StringW ____lastLogStr;

  /// @brief Field _uniqueStrOnly, offset: 0x28, size: 0x1, def value: None
  bool ____uniqueStrOnly;

  /// @brief Field MAX_COOK_LOG_COUNT offset 0xffffffff size 0x4
  static constexpr int32_t MAX_COOK_LOG_COUNT{ static_cast<int32_t>(0x2329) };

  /// @brief Field MaxLogSize offset 0xffffffff size 0x8
  static constexpr int64_t MaxLogSize{ static_cast<int64_t>(0x2faf080) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_CookLogs, 0x30>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_CookLogs, ____cookLogs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_CookLogs, ____currentCookLogCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_CookLogs, ____lastLogStr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_CookLogs, ____uniqueStrOnly) == 0x28, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_CookLogs);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_CookLogs*, "HoudiniEngineUnity", "HEU_CookLogs");
