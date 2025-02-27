#pragma once
// IWYU pragma private; include "System/Net/HttpVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HttpVersion)
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class HttpVersion;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpVersion);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpVersion
class CORDL_TYPE HttpVersion : public ::System::Object {
public:
  // Declarations
  /// @brief Field Unknown, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Unknown, put = setStaticF_Unknown)) ::System::Version* Unknown;

  /// @brief Field Version10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Version10, put = setStaticF_Version10)) ::System::Version* Version10;

  /// @brief Field Version11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Version11, put = setStaticF_Version11)) ::System::Version* Version11;

  /// @brief Field Version20, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Version20, put = setStaticF_Version20)) ::System::Version* Version20;

  static inline ::System::Version* getStaticF_Unknown();

  static inline ::System::Version* getStaticF_Version10();

  static inline ::System::Version* getStaticF_Version11();

  static inline ::System::Version* getStaticF_Version20();

  static inline void setStaticF_Unknown(::System::Version* value);

  static inline void setStaticF_Version10(::System::Version* value);

  static inline void setStaticF_Version11(::System::Version* value);

  static inline void setStaticF_Version20(::System::Version* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpVersion(HttpVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpVersion(HttpVersion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9549 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpVersion, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpVersion);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpVersion*, "System.Net", "HttpVersion");
