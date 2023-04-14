"""A dtype for working with variable-length string data

"""

from .missing import NA  # isort: skip
from .scalar import StringScalar  # isort: skip
from ._main import StringDType, _memory_usage

__all__ = [
    "NA",
    "StringDType",
    "StringScalar",
    "_memory_usage",
]
