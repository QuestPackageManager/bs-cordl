#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsProcessableFile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsProcessableFile)
namespace System::IO {
class FileInfo;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsProcessableFile;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsProcessableFile);
// Dependencies Org.BouncyCastle.Cms.CmsProcessable, Org.BouncyCastle.Cms.CmsReadable, System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsProcessableFile
class CORDL_TYPE CmsProcessableFile : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bufSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__bufSize, put = __cordl_internal_set__bufSize)) int32_t _bufSize;

  /// @brief Field _file, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__file, put = __cordl_internal_set__file)) ::System::IO::FileInfo* _file;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsProcessable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsProcessable*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsReadable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsReadable*() noexcept;

  /// @brief Method GetContent, addr 0x265f10c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* GetContent();

  /// @brief Method GetInputStream, addr 0x265eff8, size 0x90, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetInputStream();

  static inline ::Org::BouncyCastle::Cms::CmsProcessableFile* New_ctor(::System::IO::FileInfo* file);

  static inline ::Org::BouncyCastle::Cms::CmsProcessableFile* New_ctor(::System::IO::FileInfo* file, int32_t bufSize);

  /// @brief Method Write, addr 0x265f088, size 0x84, virtual true, abstract: false, final false
  inline void Write(::System::IO::Stream* zOut);

  constexpr int32_t const& __cordl_internal_get__bufSize() const;

  constexpr int32_t& __cordl_internal_get__bufSize();

  constexpr ::System::IO::FileInfo* const& __cordl_internal_get__file() const;

  constexpr ::System::IO::FileInfo*& __cordl_internal_get__file();

  constexpr void __cordl_internal_set__bufSize(int32_t value);

  constexpr void __cordl_internal_set__file(::System::IO::FileInfo* value);

  /// @brief Method .ctor, addr 0x265ef98, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::FileInfo* file);

  /// @brief Method .ctor, addr 0x265efc8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::FileInfo* file, int32_t bufSize);

  /// @brief Convert to "::Org::BouncyCastle::Cms::CmsProcessable"
  constexpr ::Org::BouncyCastle::Cms::CmsProcessable* i___Org__BouncyCastle__Cms__CmsProcessable() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Cms::CmsReadable"
  constexpr ::Org::BouncyCastle::Cms::CmsReadable* i___Org__BouncyCastle__Cms__CmsReadable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsProcessableFile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessableFile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsProcessableFile(CmsProcessableFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessableFile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsProcessableFile(CmsProcessableFile const&) = delete;

  /// @brief Field DefaultBufSize offset 0xffffffff size 0x4
  static constexpr int32_t DefaultBufSize{ static_cast<int32_t>(0x8000) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 646 };

  /// @brief Field _file, offset: 0x10, size: 0x8, def value: None
  ::System::IO::FileInfo* ____file;

  /// @brief Field _bufSize, offset: 0x18, size: 0x4, def value: None
  int32_t ____bufSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsProcessableFile, ____file) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsProcessableFile, ____bufSize) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsProcessableFile, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsProcessableFile);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsProcessableFile*, "Org.BouncyCastle.Cms", "CmsProcessableFile");
