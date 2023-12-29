#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsProcessableFile)
namespace System::IO {
class FileInfo;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
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
// Type: Org.BouncyCastle.Cms::CmsProcessableFile
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(646))
// CS Name: ::Org.BouncyCastle.Cms::CmsProcessableFile*
class CORDL_TYPE CmsProcessableFile : public ::System::Object {
public:
  // Declarations
  /// @brief Field _file, offset 0x10, size 0x8
  __declspec(property(get = __get__file, put = __set__file))::System::IO::FileInfo* _file;

  /// @brief Field _bufSize, offset 0x18, size 0x4
  __declspec(property(get = __get__bufSize, put = __set__bufSize)) int32_t _bufSize;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsProcessable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsProcessable*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsReadable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsReadable*() noexcept;

  constexpr ::System::IO::FileInfo*& __get__file();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::FileInfo*> const& __get__file() const;

  constexpr void __set__file(::System::IO::FileInfo* value);

  constexpr int32_t& __get__bufSize();

  constexpr int32_t const& __get__bufSize() const;

  constexpr void __set__bufSize(int32_t value);

  static inline ::Org::BouncyCastle::Cms::CmsProcessableFile* New_ctor(::System::IO::FileInfo* file);

  /// @brief Method .ctor addr 0x1173f40 size 0x30 virtual false final false
  inline void _ctor(::System::IO::FileInfo* file);

  static inline ::Org::BouncyCastle::Cms::CmsProcessableFile* New_ctor(::System::IO::FileInfo* file, int32_t bufSize);

  /// @brief Method .ctor addr 0x1173f70 size 0x30 virtual false final false
  inline void _ctor(::System::IO::FileInfo* file, int32_t bufSize);

  /// @brief Method GetInputStream addr 0x1173fa0 size 0x94 virtual true final false
  inline ::System::IO::Stream* GetInputStream();

  /// @brief Method Write addr 0x1174034 size 0x84 virtual true final false
  inline void Write(::System::IO::Stream* zOut);

  /// @brief Method GetContent addr 0x11740b8 size 0x8 virtual true final false
  inline ::System::Object* GetContent();

  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessableFile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsProcessableFile(CmsProcessableFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsProcessableFile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsProcessableFile(CmsProcessableFile const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsProcessableFile();

public:
  /// @brief Field _file, offset: 0x10, size: 0x8, def value: None
  ::System::IO::FileInfo* ____file;

  /// @brief Field _bufSize, offset: 0x18, size: 0x4, def value: None
  int32_t ____bufSize;

  /// @brief Field DefaultBufSize offset 0xffffffff size 0x4
  static constexpr int32_t DefaultBufSize{ static_cast<int32_t>(0x8000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsProcessableFile, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsProcessableFile, ____file) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsProcessableFile, ____bufSize) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsProcessableFile);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsProcessableFile*, "Org.BouncyCastle.Cms", "CmsProcessableFile");
