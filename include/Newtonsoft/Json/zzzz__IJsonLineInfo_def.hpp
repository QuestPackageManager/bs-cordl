#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IJsonLineInfo)
// Forward declare root types
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::IJsonLineInfo);
// Type: Newtonsoft.Json::IJsonLineInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::IJsonLineInfo*
class CORDL_TYPE IJsonLineInfo {
public:
  // Declarations
  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  /// @brief Method HasLineInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HasLineInfo();

  /// @brief Method get_LineNumber, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_LinePosition();

  // Ctor Parameters [CppParam { name: "", ty: "IJsonLineInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJsonLineInfo(IJsonLineInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJsonLineInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJsonLineInfo(IJsonLineInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::IJsonLineInfo);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::IJsonLineInfo*, "Newtonsoft.Json", "IJsonLineInfo");
