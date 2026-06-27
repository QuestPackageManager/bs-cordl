#pragma once
// IWYU pragma private; include "GlobalNamespace/InvalidBeatmapDataException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidBeatmapDataException)
// Forward declare root types
namespace GlobalNamespace {
class InvalidBeatmapDataException;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InvalidBeatmapDataException);
// Dependencies System.Exception
namespace GlobalNamespace {
// Is value type: false
// CS Name: InvalidBeatmapDataException
class CORDL_TYPE InvalidBeatmapDataException : public ::System::Exception {
public:
// Declarations
static inline ::GlobalNamespace::InvalidBeatmapDataException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x3219af8, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvalidBeatmapDataException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvalidBeatmapDataException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidBeatmapDataException(InvalidBeatmapDataException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidBeatmapDataException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidBeatmapDataException(InvalidBeatmapDataException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18886};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InvalidBeatmapDataException, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InvalidBeatmapDataException);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InvalidBeatmapDataException*, "", "InvalidBeatmapDataException");
