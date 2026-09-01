#pragma once
// IWYU pragma private; include "System\Xml\PositionInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PositionInfo)
namespace System::Xml {
class IXmlLineInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class PositionInfo;
}
// Write type traits
MARK_REF_T(::System::Xml::PositionInfo*);
DEFINE_IL2CPP_CLASS(::System::Xml::PositionInfo*, "System.Xml", "PositionInfo");
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.PositionInfo
class CORDL_TYPE PositionInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  /// @brief Convert operator to "::System::Xml::IXmlLineInfo"
  constexpr operator ::System::Xml::IXmlLineInfo*() noexcept;

  /// @brief Method GetPositionInfo, addr 0x62cdd3c, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Xml::PositionInfo* GetPositionInfo(::System::Object* o);

  /// @brief Method HasLineInfo, addr 0x62cdd24, size 0x8, virtual true, abstract: false, final false
  inline bool HasLineInfo();

  static inline ::System::Xml::PositionInfo* New_ctor();

  /// @brief Method .ctor, addr 0x62cdde8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LineNumber, addr 0x62cdd2c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x62cdd34, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_LinePosition();

  /// @brief Convert to "::System::Xml::IXmlLineInfo"
  constexpr ::System::Xml::IXmlLineInfo* i___System__Xml__IXmlLineInfo() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PositionInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PositionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PositionInfo(PositionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PositionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PositionInfo(PositionInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9416 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::PositionInfo) == 0x10, "Size mismatch!");

} // namespace System::Xml
